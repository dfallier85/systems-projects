# Node-RED Robot Control UI

A practical GitHub-style guide for building a simple operator-facing Node-RED interface for robot control.

This project is useful when you want a lightweight UI layer that can:
- send commands to robots
- show robot responses
- test MQTT command paths
- act as a supervisory demo interface
- provide a clean manual control surface during development

It fits well in systems where Node-RED sits above the robot command layer and below a more formal HMI.

---

## What This Project Covers

- Node-RED as a robot control UI layer
- publishing robot commands over MQTT
- receiving and displaying robot responses
- clean command / response topic structure
- simple multi-robot UI pattern
- testing and validation workflow
- reusable template for future UI projects

---

## Why This Matters

A lot of robotics projects prove that commands can be sent.

This repo goes one step farther:

- give an operator-facing way to send them
- show visible response feedback
- organize the control path clearly

That is useful for demos, integration work, and troubleshooting because it gives you a practical control surface without needing a full industrial HMI.

---

## Folder Structure

```text
node-red-robot-control-ui/
├── README.md
├── nodered/
│   └── flow.json
├── docs/
│   ├── system_overview.md
│   ├── topic_map.md
│   ├── ui_command_flow.md
│   └── testing_and_validation.md
├── examples/
│   └── multi_robot_ui_example.md
├── templates/
│   └── node_red_ui_project_template.md
└── .gitignore
```

---

## Example Topics

### UR
- command: `robot/ur/cmd`
- response: `robot/ur/response`

### ABB
- command: `robot/abb/cmd`
- response: `robot/abb/response`

---

## What the Starter Flow Does

The included Node-RED flow:
- sends `wave` to UR
- sends `wave` to ABB
- sends `stop` to both
- subscribes to both response topics
- prints responses to the Node-RED debug sidebar

This keeps the UI simple and useful.

---

## How to Use This Repo

Start with:
- `docs/system_overview.md`
- `docs/topic_map.md`
- `docs/ui_command_flow.md`
- `docs/testing_and_validation.md`

Then import:
- `nodered/flow.json`

Read:
- `examples/multi_robot_ui_example.md`

Use:
- `templates/node_red_ui_project_template.md`

for future writeups.

---

## Author Notes

This repo is intentionally lightweight and readable.  
It is meant to be a clean operator-facing control layer for development and demonstration work, not a full production HMI.
