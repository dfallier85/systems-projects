# System Overview

## Basic flow

```text
[Soil Moisture Sensor]
          ->
   [Microcontroller Logic]
          ->
 [Relay / Pump Control Output]
          ->
        [Watering]
```

Optional future additions:

```text
[Light Control]
[MQTT / Dashboard]
[Multi-Zone Watering]
[Data Logging]
[Plant Health Vision]
```

## Main idea

AutoGarden is not just a sensor project and not just a pump project.

It is a small automation system where:
- input is measured
- logic decides action
- an actuator changes the physical environment

That is what makes it a systems project.
