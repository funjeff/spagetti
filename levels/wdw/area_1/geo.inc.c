#include "src/game/envfx_snow.h"

const GeoLayout wdw_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0, wdw_dl__000_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0, wdw_dl__001_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5017, 0, 90, 0, 0, wdw_dl__002_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0, wdw_dl__003_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0, wdw_dl__004_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0, wdw_dl__005_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0, wdw_dl__006_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0, wdw_dl__007_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0, wdw_dl__008_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0, wdw_dl__009_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0, wdw_dl__010_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0, wdw_dl__017_geometry_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0, wdw_dl__018_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0),
		GEO_TRANSLATE_ROTATE(LAYER_OPAQUE, 0, 5016, 0, 90, 0, 0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wdw_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_ABOVE_CLOUDS, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wdw_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, wdw_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
