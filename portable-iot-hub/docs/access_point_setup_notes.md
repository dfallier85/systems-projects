# Access Point Setup Notes

## Main idea

A Raspberry Pi or similar Linux device can act as a local access point for the rest of the IoT system.

## Typical software pieces

Common AP setups use:
- `hostapd`
- `dnsmasq`

## Typical tasks

- assign a static IP to the hub
- configure SSID and password
- define DHCP range
- enable AP services

## Important reminder

Exact commands can vary by OS image and network manager setup.
That is why this repo keeps the notes conceptual and includes a reference script instead of pretending one exact command fits every Pi forever.
