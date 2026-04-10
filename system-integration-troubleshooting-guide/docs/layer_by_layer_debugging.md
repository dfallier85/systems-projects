# Layer-by-Layer Debugging

## Example system

```text
[UI] -> [MQTT] -> [Controller] -> [Robot]
```

## Debug order

1. UI publishes?
2. MQTT broker receives?
3. Controller subscribes?
4. Controller executes?
5. Robot responds?

## Key idea

If a layer fails, DO NOT skip ahead.

Fix that layer first.
