# Sensor + Pump + Dashboard Example

## Scenario

A moisture sensor is read by a controller, which decides whether to run a pump.
System status is displayed on a dashboard.

## Flow

1. sensor provides reading
2. controller interprets value
3. threshold logic decides whether watering is needed
4. relay or MOSFET drives pump
5. status is published to dashboard

## Why this matters

This is a clean example of a small automation platform with:
- sensing
- logic
- actuation
- operator visibility
