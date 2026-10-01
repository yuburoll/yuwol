# Build Guide
This is the build guide for yuwol.

This build guide contains photos of the prototype version. The newest version has the following differences:

- The corner screws on the outer top have been moved 1u inward, and so has the PCB design.

- The lower pinky modifier keys are not changeable, as marked in black on the prototype PCB.

This document was translated by generative AI, so some text may be misleading.

### Additional Resources
[**Soldering Tips**](solderingTip.md)

[**Dongle Build Guide**](dongleBuild.md)

## PCB Preparation
Prepare two PCBs for the yuwol. Since these are reversible PCBs, be careful to place components on different sides for each board.

The side where components will be placed is treated as the back, and the side without components is treated as the front. **All components go on the back side, except battery switches for wireless. Please be careful when soldering.**

![yuwolBuildPCB](../images/yuwolBuildPCB.jpg)

Note: The PCBs of the photo above are prototype. There are a little difference between release; two outside screw hole leafs are mirrored because of rigidity. 

## Soldering the Diodes
Solder the diodes. The photos show SMD diodes being used, but THT diodes can also be used.

When using SMD diodes, first apply a solder blob to one side of the pad with a soldering iron, as shown in the following photos.

![yuwolBuildDiode0](../images/yuwolBuildDiode0.jpg)
![yuwolBuildDiode1](../images/yuwolBuildDiode1.jpg)

Reheat the solder blob with the iron to melt it, align the diode in the correct orientation and place it in position, then remove the iron.

![yuwolBuildDiode2](../images/yuwolBuildDiode2.jpg)

Once it is seated properly, solder the opposite leg.

![yuwolBuildDiode3](../images/yuwolBuildDiode3.jpg)

## Soldering the Hot-swap Sockets
Solder the hot-swap sockets. The process is largely the same as soldering the diodes.

As before, apply a solder blob to one side of the pad, reheat the blob to melt it, place the component and hold it in position, remove the iron, then solder the opposite leg.

![yuwolBuildSocket1](../images/yuwolBuildHotswap1.jpg)
![yuwolBuildSocket3](../images/yuwolBuildHotswap3.jpg)

## (Optional) Soldering the Reset Switch
As with the diodes and hot-swap sockets, apply a solder blob to one side of the pad, reheat the blob to melt it, place the component and hold it in position, remove the iron, then solder the opposite legs. You may solder all four legs.

![yuwolBuildReset1](../images/yuwolBuildReset1.jpg)
![yuwolBuildReset3](../images/yuwolBuildReset3.jpg)

## (Wired) Soldering the USB-C Jack and the Jumper
Refer to the following photos to identify where the USB-C jack will be placed. The jack will be placed on the back side.

![yuwolBuildUSB1](../images/yuwolBuildUSB1.jpg)

Solder the USB-C jack on the back side. Apply solder blobs to the pads on the back side and heat them. Then, solder the remaining legs.

![yuwolBuildUSB2](../images/yuwolBuildUSB2.jpg)
![yuwolBuildUSB3](../images/yuwolBuildUSB3.jpg)

On the left PCB, bridge the jumpers located at the bottom. Apply enough solder so that a blob forms on top.

![yuwolBuildJump0](../images/yuwolBuildJump0.jpg)

## (Wireless) Soldering the Battery Switch and the Battery Jack
Solder the battery switch. The battery switch goes on the front side, so solder it from the back side.

![yuwolBuildPowSw2](../images/yuwolBuildPowSw2.jpg)
![yuwolBuildPowSw1](../images/yuwolBuildPowSw1.jpg)

Insert the 2-pin Molex jack on the back side and solder it from the front side. Bridge the pins to the adjacent pads as if soldering jumpers.

![yuwolBuildMolex1](../images/yuwolBuildMolex1.jpg)
![yuwolBuildMolex2](../images/yuwolBuildMolex2.jpg)
![yuwolBuildMolex3](../images/yuwolBuildMolex3.jpg)

## Soldering the Dev Board
First, check the header pins on the provided Pro Micro dev board. The outermost row of header pins past 5V is not needed, so trim them off.

![yuwolBuildDevboard0](../images/yuwolBuildDevboard0.jpg)
![yuwolBuildDevboard1](../images/yuwolBuildDevboard1.jpg)

Insert the header pins starting from 5V, align them, and solder the dev board. When soldering, make sure the components face upward as shown in the photo.

![yuwolBuildDevboard2](../images/yuwolBuildDevboard2.jpg)
![yuwolBuildDevboard4](../images/yuwolBuildDevboard4.jpg)

Place the dev board with the soldered header pins on top of the already-soldered hot-swap sockets, and tack-solder the four corner points in advance.

![yuwolBuildDevSolder0](../images/yuwolBuildDevSolder0.jpg)
![yuwolBuildDevSolder1](../images/yuwolBuildDevSolder1.jpg)
![yuwolBuildDevSolder3](../images/yuwolBuildDevSolder3.jpg)

While heating the pre-soldered corner points, press down the dev board firmly to ensure a tight fit.

![yuwolBuildDevSolder4](../images/yuwolBuildDevSolder4.jpg)

Bridge the header pins to the adjacent pads as if soldering jumpers. Since a large amount of solder is used, there is a risk of bridging from flux residue, so be sure to clean the area with alcohol after soldering.

![yuwolBuildDevSolder5](../images/yuwolBuildDevSolder5.jpg)

## Check PCB and flash firmware before Assembly
One side of a finished wireless PCB looks like the following image.

![yuwolBuildCheck0](../images/yuwolBuildCheck0.jpg)
![yuwolBuildCheck1](../images/yuwolBuildCheck1.jpg)

If you're a keyboard enthusiast, I'd recommend installing stabilizers at keycap positions 2u or larger, as shown in the following photo.

![yuwolBuildPlate0](../images/yuwolBuildPlate0.jpg)

Also, please flash the firmware before assembling the case.

For the RP2040 Pro Micro, hold down the Boot button on the development board while connecting the USB, then drop the .uf2 file onto the removable disk that appears.

For the ATmega32U4 Pro Micro, load the firmware .hex in your flashing tool (e.g., QMK Toolbox). Then, with the USB connected, briefly short RST and GND with a conductor, or solder a 4x4x1.5mm tactile switch to those pads and press it. The Caterina bootloader will activate and the tool will flash the firmware.

For the nice!nano and its clones, with the USB connected, briefly short RST and GND with a conductor, or solder a 4x4x1.5mm tactile switch to those pads and press it twice. Then drop the .uf2 file onto the removable disk that appears.

## Plate Assembly
First, insert the switches into the top and bottom of the plate in the correct orientation, then mount the PCB onto them.

![yuwolBuildPlate1](../images/yuwolBuildPlate1.jpg)
![yuwolBuildPlate2](../images/yuwolBuildPlate2.jpg)
![yuwolBuildPlate3](../images/yuwolBuildPlate3.jpg)

After that, put the remaining switches on the plate assembly.

![yuwolBuildPlate4](../images/yuwolBuildPlate4.jpg)

## (Optional) Add Heat Inserts
First, place the heat inserts over the holes, then push them in with the soldering iron until they are properly seated.

Do not push too hard, or the inserts will sit too deep.

![yuwolBuildHeatinsert1](../images/yuwolBuildHeatinsert1.jpg)
![yuwolBuildHeatinsert2](../images/yuwolBuildHeatinsert2.jpg)
![yuwolBuildHeatinsert3](../images/yuwolBuildHeatinsert3.jpg)

## (Wireless) Battery Cover Assembly
Put the battery in the hole of the case, and put the battery cover on it.

![yuwolBuildBattery0](../images/yuwolBuildBattery0.jpg)
![yuwolBuildBattery1](../images/yuwolBuildBattery1.jpg)
![yuwolBuildBattery2](../images/yuwolBuildBattery2.jpg)

After that, connect the jack from the PCB and the battery.

![yuwolBuildBattery3](../images/yuwolBuildBattery3.jpg)

## Case Assembly
Place the plate assembly over the case and fasten it with screws at five points per side to complete the build. Also, you may add four bumpons on the bottom of the case.

![yuwolBuildCase0](../images/yuwolBuildCase0.jpg)
![yuwolBuildCase1](../images/yuwolBuildCase1.jpg)
![yuwolBuildCase2](../images/yuwolBuildCase2.jpg)
