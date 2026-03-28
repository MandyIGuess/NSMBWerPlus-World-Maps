#include <common.h>
#include <actors.h>

#include "world_maps/data/culling_actor.h"
#include "world_maps/data/culling_map_model.h"
#include "world_maps/data/culling_wm_cloud.h"

f32 getWmActorCullRadius(short profName) {
    // There are map actors before WM_IBARA, however they do not need to be culled
    if ((profName < WM_IBARA) || (profName >= WORLD_SELECT)) {
        return NO_CULL;
    }

    return wmActorCullRadius[profName - WM_IBARA];
}
