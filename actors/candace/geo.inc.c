#include "src/game/envfx_snow.h"

const GeoLayout candace_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_ALPHA, candace_Candace_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, candace_Candace_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, candace_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, candace_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
