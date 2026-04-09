# Portable Lab Network Example

## Scenario

A Raspberry Pi hosts a portable Wi-Fi network, MQTT broker, and dashboard for embedded devices in a lab demo setup.

## Flow

1. devices connect to local AP
2. devices publish status to broker
3. dashboard subscribes and shows state
4. operator sends commands back to devices

## Why this matters

This shows how the architecture supports portable, repeatable demonstrations without depending on outside infrastructure.
