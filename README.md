# attiny85 Morse Keyer

<!--Apparenly amateur radio operators still use Morse code.  It's efficient and uses little bandwith.
After finding how much a proper mechanical switch--[key or keyer](http://hamuniverse.com/n2eycodekeys.html)--costs, I resolved to building one.-->
This project provides a touch interface for sending morse code via amateur radio. The code is plug-and-play with the ATtiny85 microcontroller. The contacts can be any conductive surface.

---
### Schematic

![alt text](https://raw.githubusercontent.com/legowave440/Attiny85Morse/master/schematic.png "Circuit Schematic")

### Possible Future Improvements
* Use hardware timer interrupts instead of `_delay_()` functions, to permit multitasking or power save features
* Rework connections to allow bit-shifting to replace `if` statements
* Lay out a PCB with SMD components for a smaller size
* Swap out output transistors with an optoisolator
* Power the microcontroller from the radio
* Add in-software electronic keying for traditional keyed radios
* Add self-trained capacitive senstivity to account for humidity/installation conditions
