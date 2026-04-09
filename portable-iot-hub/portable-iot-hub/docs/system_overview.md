# System Overview

## Basic flow

```text
[ESP32 / ESP8266 / Jetson / Laptop]
                |
                v
      [Portable IoT Hub / Pi]
         |              |
         v              v
   [MQTT Broker]   [Node-RED / UI]
```

## Main idea

The hub acts as the center of the local system.

That means it can provide:
- network access
- message routing
- dashboard access
- a fixed broker address

## Why this matters

When everything points at one known hub, the overall system gets much easier to launch and debug.
