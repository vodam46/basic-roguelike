
// custom libraries
#include "tile.h"
#include "entity.h"

// tile initialization function
// x y position
// type of tile
// entity on the tile
tile tile_init(vector _pos, tile_type _type, entity _ent) {
	tile ret_tile;
	ret_tile.pos = _pos;
	ret_tile.type = _type;
	ret_tile.ent = _ent;
	return ret_tile;
}
