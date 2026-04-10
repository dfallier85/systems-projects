# MQTT and Dashboard Integration

## Why this matters

The hub becomes much more useful when it also hosts the system services.

## Typical services on the hub

- MQTT broker
- Node-RED
- lightweight Python services
- logs or simple dashboards

## Good pattern

Each client device uses the hub as:
- Wi-Fi network
- broker host
- dashboard host

That creates one obvious center for the whole system.

## Example

- broker: `192.168.4.1`
- dashboard: `192.168.4.1:1880`
