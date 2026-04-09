# Watering Logic

## Main idea

The sensor reading should not directly become continuous pump power.

A cleaner design is:
1. read moisture
2. interpret moisture value
3. compare to threshold
4. if below threshold, run a short watering cycle
5. enforce a cooldown before another watering cycle

## Why this matters

This reduces the chance of:
- rapid relay chatter
- constant pump cycling
- immediate repeated watering from noisy readings

## Good future upgrades

- hysteresis
- averaging
- multi-sample confirmation
- schedule windows
- zone-by-zone control
