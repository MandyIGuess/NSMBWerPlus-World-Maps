# NSMBWer+ - World Maps Fork
## Changelog

* Removed hardcoded default return nodes when failing an Enemy Ambush (now uses point 0).
* Dynamic resource lists! See `/src/world_maps/data/resource_lists.h` to change these.
* Support for editing World Map culling:
  * See `/src/world_maps/data/culling_actor.h` for Map Actor culling
  * See `/src/world_maps/data/culling_map_model.h` for culling the map itself
  * See `/src/world_maps/data/culling_wm_cloud.h` for culling the World 7 clouds
* Support for changing which boss is present in a world.
* Fixed a bug where the Tower appears jumped on when bosses jump into a Castle.
* Dehardcoded the HUD icon for the Start Nodes, they will display the direction of the node itself.
* Fixed a bug with CLR route animations where they would improperly report as being completed, thus
making the next route anim (or the course unlock) happen earlier than intended.
* Support for removing World 3-4 (switch course) hardcodes. Uncomment `wm_W304.yaml` in the project YAML to remove them
* Added support for Tower/Castle 2 courses having Star Coins with the retail condition system (no difference is noticable when using LevelInfo)
* Added patches to remove the "hint" messages seen when exiting Toad Houses, Peach's Castle, or getting a Game Over (off by default)
* Added support for changing the "Last Course" list, which controls some behavior regarding 8-Castle's completion, and if the W5 vines spawn
