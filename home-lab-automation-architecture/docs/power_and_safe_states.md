# Power and Safe States

## Main point

Power planning matters just as much as code.

## Good things to document

- what powers logic devices
- what powers actuators
- where grounds are shared
- what outputs default to on startup
- what safe OFF means for the system

## Why this matters

A lot of automation bugs are really:
- brownouts
- weak actuator power
- startup glitches
- outputs coming up in the wrong state

## Good design question

If the controller reboots unexpectedly, what should the actuators do?
That answer should be intentional.
