# System Overview

## Basic flow

```text
[Operator]
    ->
[Node-RED UI]
    ->
[MQTT Broker]
    ->
[Robot Bridge / Robot Controller]
    ->
[Robot Response Topic]
    ->
[Node-RED Debug / UI Feedback]
```

## Main idea

The UI layer should not own robot motion details.

Its job is to:
- send clear commands
- show clear responses
- make the system easier to test and demonstrate

That keeps Node-RED useful without turning it into a pile of hidden robot logic.
