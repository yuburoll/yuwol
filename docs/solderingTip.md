# Soldering Tips

A collection of soldering advice and tips.

This documents are translated by generative AI, so there can be some misleading texts.

## Supplies

- Soldering iron & stand: A chisel tip is the most convenient to work with. I recommend getting one that can maintain a temperature of at least 400–500°C.

- Solder: Choose between leaded and lead-free solder. Leaded solder is less stressful to work with, but it is not good for your health.

- Solder paste (flux): **The god of soldering.** If your solder joints are not turning out well, frequently wipe and coat the iron tip with paste flux.

- Damp sponge/paper towel, or a tip cleaner (brass wool): Used to wipe residual solder off the iron tip.

- Solder wick or solder sucker: Used to fix bad solder joints. For beginners, solder wick is recommended.

- Flush cutters: Used to clip the legs of THT diodes after soldering.

## Ventilate Your Workspace

The metal fumes from melting solder are a concern, but they are actually quite minimal. The bigger issue is the smoke from the rosin flux inside the solder burning and melting — it is quite harmful and produces a lot of smoke. It is very bad for your health, so ventilate the area, or if ventilation is not possible, make sure to use an air purifier. Always wear a mask.

## Double-Check Before Soldering Components

It is easier to prevent a bad solder joint than to fix one. To correct a solder joint, apply flux to solder wick and press it against the joint with the iron, or apply a small amount of flux to the iron tip, melt the solder, and simultaneously press a solder sucker against it to absorb the solder.

## Apply Flux If Solder Is Not Sticking

Melt flux onto the iron tip to coat it, or use a flux pen to apply it directly to the PCB pads.

## Touch the Iron First When Starting, Remove It Last When Finishing

Place the iron on the pad first to preheat the PCB and component, then melt the solder onto the joint. When finishing, remove the solder first, then remove the iron last.

## Use Masking Tape to Temporarily Hold Components

For components like sockets, securing them with masking tape before soldering is helpful. This is especially important when you need to flip the board over, as components can be difficult to hold in place.

## Clean the Flux After Soldering

Scrub the remaining flux and any areas prone to short circuits thoroughly using a toothbrush dipped in isopropyl alcohol. You can also spray alcohol on the board, scrub with a toothbrush, and let it dry. Keyboard key inputs may work fine with residual flux, but encoders and analog inputs are more susceptible to issues caused by flux bridging.

## If Something Goes Wrong, Reflow and Clean

Problems can arise from cold joints, insufficient solder, excess solder bridging neighboring pads, or electrical interference from flux residue. In most cases, reflowing the solder joint and cleaning the flux will resolve the issue.
