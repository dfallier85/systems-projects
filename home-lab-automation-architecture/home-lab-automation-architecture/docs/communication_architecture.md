# Communication Architecture

## Common paths

A small automation platform often includes communication between:
- sensors and controller
- controller and actuators
- controller and broker
- broker and dashboard
- dashboard and operator

## Typical messaging pattern

```text
[Sensor / Controller] -> [MQTT Broker] -> [Node-RED / Dashboard]
```

Or:
```text
[Dashboard Command] -> [MQTT Broker] -> [Controller / Device]
```

## Why this matters

The architecture should explain:
- what data is published
- who subscribes
- who owns the decision logic
- what happens if communication is lost
