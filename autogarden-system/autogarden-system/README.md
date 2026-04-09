# AutoGarden System

A practical GitHub-style guide for structuring a small automated plant-care system.

This repo is designed as a systems project because it brings together:
- sensing
- decision logic
- actuator control
- power considerations
- staged expansion planning

It is based on the idea of an automated residential gardening system that can grow over time from a simple watering/lighting prototype into a much larger controlled-environment platform.

---

## What This Project Covers

- Phase 1 AutoGarden concept
- soil moisture sensing
- relay-controlled pump actuation
- simple threshold-based watering logic
- system architecture and expansion planning
- wiring and power notes
- reusable project template for future versions

---

## Why This Matters

This is stronger than a single sensor demo or a single relay demo.

It is a real systems project because it ties together:
- embedded sensing
- actuator control
- practical automation logic
- staged system growth

It shows how a small prototype can be designed in a way that supports future features such as:
- automated lighting
- multiple plants or zones
- networked monitoring
- AI-based plant health checks
- scheduling and logging

---

## Folder Structure

```text
autogarden-system/
├── README.md
├── arduino/
│   └── autogarden_phase1_controller.ino
├── docs/
│   ├── system_overview.md
│   ├── phase1_architecture.md
│   ├── watering_logic.md
│   ├── wiring_and_power.md
│   ├── future_expansion.md
│   └── testing_and_validation.md
├── examples/
│   └── phase1_two_plant_example.md
├── templates/
│   └── autogarden_project_template.md
└── .gitignore
```

---

## Phase 1 Goal

The first practical version of AutoGarden is a small automated watering/light prototype for one or two plants.

The starter control logic here focuses on:
- reading soil moisture
- deciding whether watering is needed
- driving a relay-controlled pump for a short cycle
- enforcing a cooldown before watering again

---

## Example Hardware Direction

Phase 1 may include:
- microcontroller
- soil moisture sensor
- relay module or MOSFET switching path
- peristaltic pump
- tubing / water source
- optional grow light
- external power supply

---

## What the Starter Controller Does

The included sketch:
- reads an analog moisture sensor
- converts the reading into a moisture percentage
- compares it to a threshold
- runs the pump for a short time if the soil is too dry
- waits before allowing another watering cycle

This is intentionally simple and readable.

---

## Important Reminder

A real watering system should never be treated like a plug-it-in-and-walk-away device without testing.

You still need to think about:
- sensor calibration
- pump run duration
- overwatering risk
- relay or MOSFET behavior
- shared grounds and power supply limits
- leak and failure risks

---

## How to Use This Repo

Start with:
- `docs/system_overview.md`
- `docs/phase1_architecture.md`
- `docs/watering_logic.md`
- `docs/wiring_and_power.md`
- `docs/future_expansion.md`
- `docs/testing_and_validation.md`

Then upload:
- `arduino/autogarden_phase1_controller.ino`

Read:
- `examples/phase1_two_plant_example.md`

Use:
- `templates/autogarden_project_template.md`

for future project writeups.

---

## Author Notes

This repo is intentionally written as a system foundation, not a finished product.
The goal is to create a clean starting point for an automation platform that can expand over time.
