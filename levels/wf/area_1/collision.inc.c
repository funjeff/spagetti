const Collision wf_area_1_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(2481, 519, -1830),
	COL_VERTEX(-2481, 519, -1830),
	COL_VERTEX(-2481, 519, 1830),
	COL_VERTEX(2481, 519, 1830),
	COL_VERTEX(2481, -519, 1830),
	COL_VERTEX(-2481, -519, 1830),
	COL_VERTEX(-2481, -519, -1830),
	COL_VERTEX(2481, -519, -1830),
	COL_TRI_INIT(SURFACE_DEFAULT, 12),
	COL_TRI(0, 1, 2),
	COL_TRI(0, 2, 3),
	COL_TRI(4, 3, 2),
	COL_TRI(4, 2, 5),
	COL_TRI(5, 2, 1),
	COL_TRI(5, 1, 6),
	COL_TRI(6, 7, 4),
	COL_TRI(6, 4, 5),
	COL_TRI(7, 0, 3),
	COL_TRI(7, 3, 4),
	COL_TRI(6, 1, 0),
	COL_TRI(6, 0, 7),
	COL_TRI_STOP(),
	COL_END()
};
