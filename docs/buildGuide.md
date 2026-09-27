# Build Guide
this is build guide for yuwol.

the build guide contains photo of prototype version. newest version have following differences:

- the corner screws of outside top are moved 1u inside, so do the PCB design.

- lower pinky modifier keys are not changeable. as black marked in prototype PCB

This documents are translated by generative AI, so there can be some misleading texts.

### Additional Resources
[**Soldering Tips**](solderingTip.md)

# PCB Preparation
Prepare two PCBs for the yuwol. Since these are reversible PCBs, be careful to place components on different sides for each board.

The side where components will be placed is treated as the back, and the side without components is treated as the front. **All components go on back side, except wireless switches. Please be careful when soldering.**

# Soldering the Diodes
Solder the diodes. The photos show SMD diodes being used, but THT diodes can also be used.

When using SMD diodes, first apply a solder blob to one side of the pad with a soldering iron, as shown in the following photos.

![yuwolBuildDiodes1](../images/yuwolBuildDiodes1.jpg)
![yuwolBuildDiode2](../images/yuwolBuildDiodes2.jpg)

Reheat the solder blob with the iron to melt it, align the diode in the correct orientation and place it in position, then remove the iron.

![yuwolBuildDiode3](../images/yuwolBuildDiodes3.jpg)

Once it is seated properly, solder the opposite leg.

![yuwolBuildDiode4](../images/yuwolBuildDiodes4.jpg)

# Soldering the Hot-swap Sockets
Solder the hot-swap sockets. The process is largely the same as soldering the diodes and LEDs.

As before, apply a solder blob to one side of the pad, reheat the blob to melt it, place the component and hold it in position, remove the iron, then solder the opposite leg.

![yuwolBuildSocket2](../images/yuwolBuildSocket2.jpg)
![yuwolBuildSocket4](../images/yuwolBuildSocket3.jpg)

# (Wired)Soldering the USB-C jack and the Jumper
Refer to the following photos to identify where the USB-C jack will be placed. The jack will be placed on back side.

![yuwolBuildJack1](../images/yuwolBuildJack1.jpg)
![yuwolBuildJack2](../images/yuwolBuildJack2.jpg)

Solder the USB-C jack. apply a solder blobs on the pads of the back side, and heat over it 

And, On the left side PCB, bridge the jumpers located at the bottom. Apply enough solder so that a blob forms on top.

![yuwolBuildJack3](../images/yuwolBuildJack3.jpg)

# (Wireless)Soldering the Switch and the Battery Jack

You may put the switch on the front side, so solder the switch on back side.

# Soldering the Dev Board
First, check the header pins on the provided Pro Micro dev board. The outermost row of header pins past 5V is not needed, so trim them off.

![BuildBoard0](../images/BuildBoard0.jpg)
![BuildBoard1](../images/BuildBoard1.jpg)

Insert the header pins starting from 5V, align them, and solder the dev board. When soldering, make sure the components face upward as shown in the photo.

![BuildBoard2](../images/BuildBoard2.jpg)
![BuildBoard3](../images/BuildBoard3.jpg)

Place the dev board with the soldered header pins on top of the already-soldered hot-swap sockets. Press down firmly to ensure a tight fit.

![yuwolBuildBoard1](../images/yuwolBuildBoard1.jpg)
![yuwolBuildBoard2](../images/yuwolBuildBoard2.jpg)

Bridge the header pins to the adjacent pads as if soldering jumpers. Since a large amount of solder is used, there is a risk of bridging with flux, so be sure to clean the area with alcohol after soldering.

![yuwolBuildBoard4](../images/yuwolBuildBoard3.jpg)

# Check PCB and flash firmware before Assembly
The finished PCBs looks like a following image.

![yuwolBuildAssembly](../images/yuwolBuildAssembly.jpg)

If you're a keyboard enthusiast, I'd recommend installing stabilizers at keycap positions 2u or larger, as shown in the following photo.

![yuwolBuildStabilizer](../images/yuwolBuildStabilizer.jpg)

Also, please flash the firmware before assembling the case.

For the RP2040 promicro, hold down the Boot button on the development board while connecting the USB, then drop the .uf2 file onto the removable disk that appears.

For the ATmega32U4 promicro, load the firmware .hex in your flashing tool (e.g., QMK Toolbox). Then, with the USB connected, briefly short RST and GND with a conductor, or solder a 4x4x1.5mm tactile switch to those pads and press it. The Caterina bootloader will activate and the tool will flash the firmware.

# Assembly
First, assemble plate and switches together with proper direction, and assemble PCB on it.

![yuwolBuildKeyswitches1](../images/yuwolBuildKeyswitches1.jpg)
![yuwolBuildKeyswitches2](../images/yuwolBuildKeyswitches2.jpg)

Place the plate assembly over the case and fasten it with screws at eight points per side to complete the build. also, you may add four bumpons on the bottom of the case.

![yuwolBuildFinish1](../images/yuwolBuildFinish1.jpg)
![yuwolBuildFinish2](../images/yuwolBuildFinish2.jpg)
