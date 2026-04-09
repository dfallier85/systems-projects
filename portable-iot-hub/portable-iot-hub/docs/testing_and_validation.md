# Testing and Validation

## Goal

Verify the portable hub works before treating it like the stable center of the system.

## Good checks

- SSID is visible
- client device can connect
- client gets expected subnet address
- hub responds at expected IP
- MQTT broker is reachable
- Node-RED is reachable
- client device can publish and subscribe

## Good habit

Validate the whole path:
1. network connection
2. broker connection
3. dashboard access
4. actual device communication
