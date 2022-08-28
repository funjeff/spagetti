const Collision earthwake_block_collision_collision[] = {
	COL_INIT(),
	COL_VERTEX_INIT(8),
	COL_VERTEX(406, -419, -433),
	COL_VERTEX(406, 419, -433),
	COL_VERTEX(433, 419, 406),
	COL_VERTEX(433, -419, 406),
	COL_VERTEX(-406, 419, 433),
	COL_VERTEX(-406, -419, 433),
	COL_VERTEX(-433, 419, -406),
	COL_VERTEX(-433, -419, -406),
	COL_TRI_INIT(SURFACE_DEFAULT, 12),
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
