import pcbnew
from collections import defaultdict

board = pcbnew.GetBoard()

by_ref = defaultdict(list)
for fp in board.GetFootprints():
    by_ref[fp.GetReference()].append(fp)

report = []
for ref, fps in by_ref.items():
    if len(fps) < 2:
        continue

    # path가 비어 있지 않은 풋프린트 = 회로도에 링크된 원본
    linked = [fp for fp in fps if fp.GetPath().AsString() not in ("", "/")]
    if not linked:
        report.append(f"{ref}: 링크된 원본 없음 → 건너뜀")
        continue
    src = linked[0]
    clones = [fp for fp in fps if fp is not src]

    # 원본의 패드번호 → 넷코드 목록 (같은 번호 패드 여러 개 대비)
    src_nets = defaultdict(list)
    for pad in src.Pads():
        src_nets[pad.GetNumber()].append(pad.GetNetCode())

    for clone in clones:
        clone.SetValue(src.GetValue())
        seen = defaultdict(int)
        for pad in clone.Pads():
            n = pad.GetNumber()
            lst = src_nets.get(n)
            if lst:
                i = min(seen[n], len(lst) - 1)
                pad.SetNetCode(lst[i])
                seen[n] += 1
        # 사본을 board-only("Not in schematic")로 표시해
        # 이후 업데이트 삭제 대상·DRC 불일치 검사에서 제외
        clone.SetAttributes(clone.GetAttributes() | pcbnew.FP_BOARD_ONLY)

    report.append(f"{ref}: 사본 {len(clones)}개 동기화")

pcbnew.Refresh()
print("\n".join(report) if report else "중복 참조 없음")