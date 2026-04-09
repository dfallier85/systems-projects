# Control Ownership

## Main point

A system gets cleaner when ownership is explicit.

## Good ownership split

### Microcontroller
- local sensor reading
- local output timing
- basic safety defaults

### Raspberry Pi / hub
- broker hosting
- dashboards
- logging
- coordination across devices

### Node-RED / UI
- operator interaction
- status display
- manual test commands
- higher-level workflow display

## Why this matters

Not every controller should do everything.

You want to know:
- which device makes the decision
- which device only reports status
- which device only provides UI
