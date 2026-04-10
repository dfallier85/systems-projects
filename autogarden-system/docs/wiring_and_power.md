# Wiring and Power

## Typical Phase 1 concept

### Logic side
- microcontroller power
- sensor signal
- control output to relay or MOSFET

### Actuation side
- external supply for pump
- switched path through relay or MOSFET
- shared ground where required by design

## Why this matters

A pump is not the same kind of load as a sensor.

You want to document:
- what powers the controller
- what powers the pump
- how the switching path works
- what the safe OFF state is

## Practical reminder

Many watering problems are really:
- power problems
- wiring problems
- timing problems
- calibration problems
