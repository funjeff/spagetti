#include "src/game/envfx_snow.h"

const GeoLayout big_bombable_door_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, big_bombable_door_Cube_009_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, big_bombable_door_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
