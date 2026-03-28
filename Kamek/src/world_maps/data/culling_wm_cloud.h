#include <common.h>

// WM_CLOUD CULLING
// This system is similar to the world map model culling, where you provide a bone name and a radius, and it
// is culled as part of one model. This supports up to 20 different bones in total.

extern "C" const char *wmCloudCullNames[20] = {
    "group01",
    "group02",
    "group03",
    "group04",
    "group05",
    "group06",
    "group07",
    "group08",
    "group10",
    "group11",
    "group12",
    "group13",
    "group14",
    "group15",
    "group16",
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};

// These correspond to the name list above
extern "C" const float wmCloudCullRadius[20] = {
    300.0f,
    300.0f,
    500.0f,
    300.0f,
    350.0f,
    420.0f,
    500.0f,
    800.0f,
    600.0f,
    300.0f,
    350.0f,
    550.0f,
    600.0f,
    600.0f,
    200.0f,
    100.0f,
    100.0f,
    100.0f,
    100.0f,
    100.0f
};
