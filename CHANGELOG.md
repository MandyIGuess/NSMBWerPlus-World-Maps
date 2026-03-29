# NSMBWer+ - World Maps Fork
## Changelog

* Removed hardcoded default return nodes when failing an Enemy Ambush (now uses point 0).
* Dynamic resource lists! See `/src/world_maps/data/resource_lists.h` to change these.
* Support for editing World Map culling:
  * See `/src/world_maps/data/culling_actor.h` for Map Actor culling
  * See `/src/world_maps/data/culling_map_model.h` for culling the map itself
  * See `/src/world_maps/data/culling_wm_cloud.h` for culling the World 7 clouds
* Support for changing which boss is present in a world.