.text
.align 4

#include <asm_setup.S>

# When a Koopaling jumps into a castle, the tower also has the jumping effect
.extern bossJump__12daWmToride_cFi
.global FixTowerJumpEffect
FixTowerJumpEffect:
    lwz r4, 0x35C(r30)
    cmpwi r4, 0
    bne _end

    # Only do the jump if the 'travel state' is 0
    b bossJump__12daWmToride_cFi
_end:
    blr
