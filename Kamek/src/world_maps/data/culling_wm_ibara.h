#include <common.h>

// WM_IBARA CULLING
// This system is similar to the map model and WM_CLOUD culling.
// This supports up to 22 different bones in total.

extern "C" const char *wmIbaraCullNames[22] = {
    "E_p_01",
    "E_p_02",
    "E_p_03",
    "N_p_01",
    "N_p_02",
    "N_p_03",
    "N_p_04",
    "N_p_05",
    "N_p_06",
    "N_p_07",
    "N_p_08",
    "S_p_01",
    "S_p_02",
    "W_p_01",
    "W_p_04",
    "W_p_05",
    "W_p_06",
    "W_p_07",
    "W_p_08",
    "W_p_09",
    "W_p_10",
    "W_p_11"  // Due to a mistake, this bone wasn't culled, however this hack fixes it
};

// Every bone uses this radius
extern float wmIbaraCullRadius = 120.0f;
