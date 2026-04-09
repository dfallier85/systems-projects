# MQTT Debugging

## Common issues

- wrong broker IP
- wrong topic
- mismatch between publish and subscribe
- payload formatting issues

## Debug steps

1. verify broker is running
2. use CLI tools:
   - mosquitto_pub
   - mosquitto_sub
3. check topic spelling exactly
4. print payloads at every step

## Tip

Always test MQTT independent of your main program first.
