#include <game.h>
#include <stage.h>
#include <dScWMap_c.h>

extern void *dWmSeManager_c__m_pInstance;
extern void dWmSeManager_c__playSoundAtPos(void *self, int sndID, Vec *pos, uint);

// The jump sound is audibly different when the tower doesn't also play its jump sound
// So this reimplements the sound but without the animation/effect
extern "C" void PlayTorideJumpSndNoAnm() {
    dActor_c *pToride = (dActor_c*)fBase_c::searchByProfileId(ProfileId::WM_TORIDE, 0x0);
    if (pToride != 0x0) {
        dWmSeManager_c__playSoundAtPos(dWmSeManager_c__m_pInstance, 0x49, &pToride->pos, 0);
    }
}

// Allow Tower 2 and Castle 2 slots to have Star Coins
// This func is ONLY use for assigning that info
int dScWMap_c::getCourseNumFromPointName(u8 *pointName) {
    if (*pointName != 'W') {
		return STAGE_INVALID;
	}
	u8 type = pointName[2];

	// Normal courses
    if (type - '0' < 20) {
		return pointName[3] - '1';
	}

	switch (type) {
		case 'T':
			return STAGE_TOWER1 + (pointName[3] - '0');
		case 'C':
			return STAGE_CASTLE1 + (pointName[3] - '0');
		case 'G':
			return STAGE_GHOST;
		case 'A':
			return STAGE_DOOMSHIP;
		default:
			break;
	}
	return STAGE_INVALID;
}
