.text
.align 4

#include <asm_setup.S>

.extern world_map_scripts_table
.extern returnToOriginalScriptCode # 0x801016CC

.global UseCustomScripts
UseCustomScripts:
    lis     r4, world_map_scripts_table@h
    ori     r4, r4, world_map_scripts_table@l
    b       returnToOriginalScriptCode
