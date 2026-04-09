# Testing and Validation

## Goal

Verify the UI actually controls the intended robot path and shows useful feedback.

## Good checks

- command publish works
- correct topic is used
- response topic receives data
- response is visible in Node-RED
- stop command reaches both robots if intended
- wrong broker or topic issues are easy to identify

## Good habit

Test one robot path at a time first, then multi-robot behavior.
That makes it easier to isolate topic or bridge problems.
