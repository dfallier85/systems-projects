# Troubleshooting Methodology

## Step 1: Define the failure clearly

Bad:
- "it doesn't work"

Good:
- "MQTT command publishes but robot does not respond"

## Step 2: Identify system layers

Break system into:
- input
- processing
- communication
- output

## Step 3: Test one layer at a time

Do not jump between layers randomly.

## Step 4: Isolate variables

Change ONE thing at a time.

## Step 5: Verify expected vs actual

Always ask:
- what SHOULD happen?
- what ACTUALLY happened?

That gap is where the problem lives.
