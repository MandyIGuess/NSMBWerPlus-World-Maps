.text
.align 4

#include <asm_setup.S>

.extern GetStartNodeIconID__Fv
.extern ReturnFromDynamicStartIcon # 0x80010D74

.global CourseSelectGuide_DynamicStartIcon
CourseSelectGuide_DynamicStartIcon:
    bl GetStartNodeIconID__Fv
    mr r6, r3 # Msg ID needs to be in r6
    b ReturnFromDynamicStartIcon
