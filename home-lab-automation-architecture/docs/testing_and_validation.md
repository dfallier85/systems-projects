# Testing and Validation

## Goal

Prove that the full system works as intended, not just that each device powers on.

## Good checks

- inputs read correctly
- communication path works
- dashboard shows real status
- outputs react correctly
- safe startup state works
- reboot behavior is acceptable
- network loss behavior is understood

## Good habit

Test in layers:
1. device only
2. communication only
3. dashboard only
4. full integrated workflow

That is much cleaner than debugging the whole stack at once.
