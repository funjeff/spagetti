#include "src/game/envfx_snow.h"

const GeoLayout spaghetti_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, spaghetti_Partydish04__dish04_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_ALPHA, spaghetti_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
