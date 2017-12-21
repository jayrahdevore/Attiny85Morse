# attiny85 Morse Keyer

### And why?
Apparenly amateur radio operators still use Morse code.  It's efficient and uses little bandwith.
After finding how much a proper mechanical switch--[key or keyer](http://hamuniverse.com/n2eycodekeys.html)--costs, I resolved to building a one.

---
### Schematic

![alt text](https://raw.githubusercontent.com/legowave440/Attiny85Morse/master/schematic.png "Circuit Schematic")

### Future Improvements
* Use hardware timer interrupts instead of `_delay_()` functions, to permit multitasking
* Rework connections to allow bit-shifting code golf to replace `if` statements
* Lay out a PCB with SMD components for a smaller size
* Swap out output transistors with an optoisolator
* Use radio power (for radio integration)
* Add electronic keying for traditional keyed radios
* Learn morse code
