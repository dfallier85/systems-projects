# Portable IoT Hub

A practical GitHub-style guide for turning a small Linux device such as a Raspberry Pi into a portable IoT hub.

This project is useful when you want one device to provide:
- Wi-Fi access point service
- MQTT broker hosting
- Node-RED or dashboard hosting
- local coordination for ESP32 / ESP8266 / Jetson / laptop clients

It is meant to support portable demos, bench setups, and small self-contained automation networks.

---

## What This Project Covers

- portable hub concept and architecture
- Raspberry Pi access point role
- stable local IP and network planning
- broker and dashboard hosting ideas
- validation workflow
- integration notes for MQTT systems
- reusable template for future portable systems

---

## Why This Matters

A lot of small IoT systems become fragile because they depend on:
- outside Wi-Fi
- changing router IPs
- inconsistent network conditions
- ad-hoc hotspot setups

A portable hub fixes that by giving your system its own small network with one obvious center.

That makes demos and field-style testing much easier to repeat.

---

## Folder Structure

```text
portable-iot-hub/
├── README.md
├── docs/
│   ├── system_overview.md
│   ├── network_plan.md
│   ├── access_point_setup_notes.md
│   ├── mqtt_and_dashboard_integration.md
│   └── testing_and_validation.md
├── scripts/
│   └── ap_setup_reference.sh
├── templates/
│   └── portable_iot_hub_project_template.md
└── .gitignore
```

---

## Example Network Plan

- SSID: `ESP32-Hub`
- Password: `Tryptol1n3!`
- Hub IP: `192.168.4.1`

Possible services:
- MQTT broker on `192.168.4.1:1883`
- Node-RED on `192.168.4.1:1880`

---

## How to Use This Repo

Start with:
- `docs/system_overview.md`
- `docs/network_plan.md`
- `docs/access_point_setup_notes.md`
- `docs/mqtt_and_dashboard_integration.md`
- `docs/testing_and_validation.md`

Then adapt:
- `scripts/ap_setup_reference.sh`

Use:
- `templates/portable_iot_hub_project_template.md`

for future systems documentation.

---

## Author Notes

This repo is intentionally system-focused.  
The goal is to make a portable IoT network understandable as a repeatable project, not just a lucky hotspot setup.
