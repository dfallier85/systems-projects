# Phase 1 Architecture

## Main point

Phase 1 should stay intentionally small.

A strong first version is:
- one controller
- one sensor
- one relay or switching stage
- one pump
- one or two plants

## Why this is smart

This keeps the first version:
- testable
- explainable
- repairable
- cheap to iterate on

## Core Phase 1 layers

### Input layer
- soil moisture reading

### Logic layer
- threshold decision
- cooldown timing
- simple pump-cycle control

### Output layer
- relay or MOSFET switching
- pump run command
