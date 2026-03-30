#include <game.h>
#include <stage.h>

// Choose the start node icon by its name instead of hardcoding it per-world
int GetStartNodeIconID() {
    int msgID = 0x37;
    fBase_c *startPoint = fBase_c::searchByProfileId(ProfileId::WM_START);
    if (startPoint != 0x0) {
        // Check if point param is `1`
        if (startPoint->settings >> 16 == 1) {
            msgID = 0x38;
        }
    }
    return msgID;
}
