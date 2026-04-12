# NSMBWer+ - World Maps Fork
## TODO List

* Dehardcoded Palm Tree actors
* Add support for XX-10 -> XX-19 course nodes
* Add support for editing the "last course" table which handles some stuff
* Dehardcoded WM_PAKKUNHEAD
* Dehardcoded WM_IBARA
* Update culling hack to v1.3.0
* Optional ability to remove post 1-3 cutscene (Toad Rescue introduction)
* Look into adding support for changing what music plays in a world
  * Also try to allow sub-areas to play different tracks
* Fix "ice" point flag not making ice particles (it just sets the particle type to the null value)

### New Features (Not guaranteed):
* Reimplement WM_TOWER course object with fortress-like interactions
* NewerSMBW World Map Shops
* Add support for standalone SRT route anims (they work with an accompanying texMask, but not by themselves?)
* Replacement for World 6 extending pipes that is much more user-friendly(?)
* Add new `anime_NAME` bones that will start playing `NAME` anim (regardless of type, CHR/CLR/SRT)
