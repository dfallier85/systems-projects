# UI Command Flow

## Example flow

1. operator presses a UI button
2. Node-RED publishes a command to the robot command topic
3. robot-side bridge or controller receives the command
4. robot executes or rejects the action
5. response is published to the response topic
6. Node-RED displays the response

## Why this matters

This turns robot control into a visible command-and-feedback loop instead of a blind publish-only demo.
