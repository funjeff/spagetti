const Collision castle_inside_area_2_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(936, 236, -27),
	COL_VERTEX(936, 593, -27),
	COL_VERTEX(739, 593, -326),
	COL_VERTEX(739, 236, -326),
	COL_VERTEX(1038, 593, -523),
	COL_VERTEX(1038, 236, -523),
	COL_VERTEX(1235, 593, -224),
	COL_VERTEX(1235, 236, -224),
	COL_TRI_INIT(SURFACE_INSTANT_QUICKSAND, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(3, 2, 4),
	COL_TRI(3, 4, 5),
	COL_TRI(5, 4, 6),
	COL_TRI(5, 6, 7),
	COL_TRI(7, 6, 1),
	COL_TRI(7, 1, 0),
	COL_TRI(3, 5, 7),
	COL_TRI(3, 7, 0),
	COL_TRI(4, 2, 1),
	COL_TRI(4, 1, 6),
	COL_TRI_STOP(),
	COL_END()
};
