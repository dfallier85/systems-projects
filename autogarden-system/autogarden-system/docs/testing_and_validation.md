# Testing and Validation

## Goal

Verify the system behaves correctly before treating it like a real unattended watering device.

## Good checks

- raw sensor values change in dry vs wet conditions
- interpreted moisture percentage behaves reasonably
- threshold logic changes state correctly
- relay or switch stage activates correctly
- pump runs for expected duration
- cooldown prevents immediate repeat watering
- system starts in a safe OFF state

## Good habit

Test in layers:
1. sensor only
2. relay or switch only
3. pump only
4. full integrated watering logic

That is cleaner than debugging everything at once.
