# Topic Map

## UR
- `robot/ur/cmd`
- `robot/ur/response`

## ABB
- `robot/abb/cmd`
- `robot/abb/response`

## Why this works

Each robot gets:
- one command topic
- one response topic

That keeps the UI readable and makes it easier to scale to more robots later.
