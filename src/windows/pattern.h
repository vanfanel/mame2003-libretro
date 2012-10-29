//============================================================
//
//	pattern.h - built-in patterns for the Direct3D RGB effects
//
//============================================================

// d3d RGB effects patterns

static const UINT8 pattern_18x10_large_round[] =
{
	0x00,0x00,0x5f,0xff, 0x00,0x00,0x3f,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x3f,0x00,0x00,0xff,
	0x5f,0x00,0x00,0xff, 0x3f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x3f,0x00,0xff,
	0x00,0x5f,0x00,0xff, 0x00,0x3f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x3f,0xff,

	0x00,0x00,0xdf,0xff, 0x00,0x00,0x9f,0xff, 0x00,0x00,0x3f,0xff, 0x00,0x00,0x00,0x00, 0x3f,0x00,0x00,0xff, 0x9f,0x00,0x00,0xff,
	0xdf,0x00,0x00,0xff, 0x9f,0x00,0x00,0xff, 0x3f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x3f,0x00,0xff, 0x00,0x9f,0x00,0xff,
	0x00,0xdf,0x00,0xff, 0x00,0x9f,0x00,0xff, 0x00,0x3f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x3f,0xff, 0x00,0x00,0x9f,0xff,

	0x00,0x00,0xff,0xff, 0x00,0x00,0xdf,0xff, 0x00,0x00,0x5f,0xff, 0x00,0x00,0x00,0x00, 0x5f,0x00,0x00,0xff, 0xe1,0x00,0x00,0xff,
	0xff,0x00,0x00,0xff, 0xdf,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x5f,0x00,0xff, 0x00,0xe1,0x00,0xff,
	0x00,0xff,0x00,0xff, 0x00,0xdf,0x00,0xff, 0x00,0x5f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x5f,0xff, 0x00,0x00,0xe1,0xff,

	0x00,0x00,0xdf,0xff, 0x00,0x00,0x9f,0xff, 0x00,0x00,0x3f,0xff, 0x00,0x00,0x00,0x00, 0x3f,0x00,0x00,0xff, 0x9f,0x00,0x00,0xff,
	0xdf,0x00,0x00,0xff, 0x9f,0x00,0x00,0xff, 0x3f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x3f,0x00,0xff, 0x00,0x9f,0x00,0xff,
	0x00,0xdf,0x00,0xff, 0x00,0x9f,0x00,0xff, 0x00,0x3f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x3f,0xff, 0x00,0x00,0x9f,0xff,

	0x00,0x00,0x5f,0xff, 0x00,0x00,0x3f,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x3f,0x00,0x00,0xff,
	0x5f,0x00,0x00,0xff, 0x3f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x3f,0x00,0xff,
	0x00,0x5f,0x00,0xff, 0x00,0x3f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x3f,0xff,

	0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x3f,0x00,0xff, 0x00,0x5f,0x00,0xff, 0x00,0x3f,0x00,0xff, 0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x3f,0xff, 0x00,0x00,0x5f,0xff, 0x00,0x00,0x3f,0xff, 0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x3f,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x3f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00,

	0x00,0x00,0x00,0x00, 0x00,0x3f,0x00,0xff, 0x00,0x9f,0x00,0xff, 0x00,0xdf,0x00,0xff, 0x00,0x9f,0x00,0xff, 0x00,0x3f,0x00,0xff,
	0x00,0x00,0x00,0x00, 0x00,0x00,0x3f,0xff, 0x00,0x00,0x9f,0xff, 0x00,0x00,0xdf,0xff, 0x00,0x00,0x9f,0xff, 0x00,0x00,0x3f,0xff,
	0x00,0x00,0x00,0x00, 0x3f,0x00,0x00,0xff, 0x9f,0x00,0x00,0xff, 0xdf,0x00,0x00,0xff, 0x9f,0x00,0x00,0xff, 0x3f,0x00,0x00,0xff,

	0x00,0x00,0x00,0x00, 0x00,0x5f,0x00,0xff, 0x00,0xe1,0x00,0xff, 0x00,0xff,0x00,0xff, 0x00,0xdf,0x00,0xff, 0x00,0x5f,0x00,0xff,
	0x00,0x00,0x00,0x00, 0x00,0x00,0x5f,0xff, 0x00,0x00,0xe1,0xff, 0x00,0x00,0xff,0xff, 0x00,0x00,0xdf,0xff, 0x00,0x00,0x5f,0xff,
	0x00,0x00,0x00,0x00, 0x5f,0x00,0x00,0xff, 0xe1,0x00,0x00,0xff, 0xff,0x00,0x00,0xff, 0xdf,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff,

	0x00,0x00,0x00,0x00, 0x00,0x3f,0x00,0xff, 0x00,0x9f,0x00,0xff, 0x00,0xdf,0x00,0xff, 0x00,0x9f,0x00,0xff, 0x00,0x3f,0x00,0xff,
	0x00,0x00,0x00,0x00, 0x00,0x00,0x3f,0xff, 0x00,0x00,0x9f,0xff, 0x00,0x00,0xdf,0xff, 0x00,0x00,0x9f,0xff, 0x00,0x00,0x3f,0xff,
	0x00,0x00,0x00,0x00, 0x3f,0x00,0x00,0xff, 0x9f,0x00,0x00,0xff, 0xdf,0x00,0x00,0xff, 0x9f,0x00,0x00,0xff, 0x3f,0x00,0x00,0xff,
	
	0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x3f,0x00,0xff, 0x00,0x5f,0x00,0xff, 0x00,0x3f,0x00,0xff, 0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x3f,0xff, 0x00,0x00,0x5f,0xff, 0x00,0x00,0x3f,0xff, 0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x3f,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x3f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00
};

static const UINT8 pattern_12x10_large_ellipsoid[] =
{
	0x5f,0x00,0x00,0xff, 0xdf,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x5f,0x00,0xff, 0x00,0xdf,0x00,0xff,
	0x00,0x5f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x5f,0xff, 0x00,0x00,0xdf,0xff, 0x00,0x00,0x5f,0xff, 0x00,0x00,0x00,0x00,

	0x7f,0x00,0x00,0xff, 0xff,0x00,0x00,0xff, 0x7f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x7f,0x00,0xff, 0x00,0xff,0x00,0xff,
	0x00,0x7f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x7f,0xff, 0x00,0x00,0xff,0xff, 0x00,0x00,0x7f,0xff, 0x00,0x00,0x00,0x00,

	0x5f,0x00,0x00,0xff, 0xdf,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x5f,0x00,0xff, 0x00,0xdf,0x00,0xff,
	0x00,0x5f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x5f,0xff, 0x00,0x00,0xdf,0xff, 0x00,0x00,0x5f,0xff, 0x00,0x00,0x00,0x00,

	0x1f,0x00,0x00,0xff, 0x7f,0x00,0x00,0xff, 0x1f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x1f,0x00,0xff, 0x00,0x7f,0x00,0xff,
	0x00,0x1f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x1f,0xff, 0x00,0x00,0x7f,0xff, 0x00,0x00,0x1f,0xff, 0x00,0x00,0x00,0x00,

	0x00,0x1f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x1f,0xff, 0x00,0x00,0x7f,0xff, 0x00,0x00,0x1f,0xff, 0x00,0x00,0x00,0x00,
	0x1f,0x00,0x00,0xff, 0x7f,0x00,0x00,0xff, 0x1f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x1f,0x00,0xff, 0x00,0x7f,0x00,0xff,

	0x00,0x5f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x5f,0xff, 0x00,0x00,0xdf,0xff, 0x00,0x00,0x5f,0xff, 0x00,0x00,0x00,0x00,
	0x5f,0x00,0x00,0xff, 0xdf,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x5f,0x00,0xff, 0x00,0xdf,0x00,0xff,

	0x00,0x7f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x7f,0xff, 0x00,0x00,0xff,0xff, 0x00,0x00,0x7f,0xff, 0x00,0x00,0x00,0x00,
	0x7f,0x00,0x00,0xff, 0xff,0x00,0x00,0xff, 0x7f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x7f,0x00,0xff, 0x00,0xff,0x00,0xff,

	0x00,0x5f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x5f,0xff, 0x00,0x00,0xdf,0xff, 0x00,0x00,0x5f,0xff, 0x00,0x00,0x00,0x00,
	0x5f,0x00,0x00,0xff, 0xdf,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x5f,0x00,0xff, 0x00,0xdf,0x00,0xff,

	0x00,0x1f,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x00,0x1f,0xff, 0x00,0x00,0x7f,0xff, 0x00,0x00,0x1f,0xff, 0x00,0x00,0x00,0x00,
	0x1f,0x00,0x00,0xff, 0x7f,0x00,0x00,0xff, 0x1f,0x00,0x00,0xff, 0x00,0x00,0x00,0x00, 0x00,0x1f,0x00,0xff, 0x00,0x7f,0x00,0xff,

	0x1f,0x00,0x00,0x00, 0x7f,0x00,0x00,0xff, 0x1f,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x1f,0x00,0x00, 0x00,0x7f,0x00,0xff,
	0x00,0x1f,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x1f,0x00, 0x00,0x00,0x7f,0xff, 0x00,0x00,0x1f,0x00, 0x00,0x00,0x00,0x00
};

static const UINT8 pattern_10x6_large_dot[] =
{
	0x00,0xff,0x00,0x00, 0x00,0x7f,0xff,0x00, 0x00,0x00,0xff,0x00, 0x00,0x00,0x00,0xff, 0x00,0x00,0x00,0xff, 
	0x00,0x00,0x00,0xff, 0x00,0x00,0x00,0xff, 0x00,0x00,0x00,0xff, 0xff,0x00,0x00,0x00, 0xff,0x7f,0x00,0x00,

	0x00,0xff,0x00,0x00, 0x00,0x3f,0xff,0x00, 0x00,0x00,0xbf,0x00, 0x00,0x00,0x00,0xff, 0xff,0x00,0x00,0x00,
	0x00,0xbf,0x00,0x00, 0x00,0x00,0xff,0x00, 0x00,0x00,0x00,0xff, 0xbf,0x00,0x00,0x00, 0xff,0x3f,0x00,0x00,

	0x00,0xbf,0x00,0x00, 0x00,0x00,0xff,0x00, 0x00,0x00,0x00,0xff, 0xbf,0x00,0x00,0x00, 0xff,0x3f,0x00,0x00,
	0x00,0xff,0x00,0x00, 0x00,0x3f,0xff,0x00, 0x00,0x00,0xbf,0x00, 0x00,0x00,0x00,0xff, 0xff,0x00,0x00,0x00,

	0x00,0x00,0x00,0xff, 0x00,0x00,0x00,0xff, 0x00,0x00,0x00,0xff, 0xff,0x00,0x00,0x00, 0xff,0x7f,0x00,0x00,
	0x00,0xff,0x00,0x00, 0x00,0x7f,0xff,0x00, 0x00,0x00,0xff,0x00, 0x00,0x00,0x00,0xff, 0x00,0x00,0x00,0xff,

	0x00,0xbf,0x00,0x00, 0x00,0x00,0xff,0x00, 0x00,0x00,0x00,0xff, 0xbf,0x00,0x00,0x00, 0xff,0x3f,0x00,0x00,
	0x00,0xff,0x00,0x00, 0x00,0x3f,0xff,0x00, 0x00,0x00,0xbf,0x00, 0x00,0x00,0x00,0xff, 0xff,0x00,0x00,0x00,
	
	0x00,0xff,0x00,0x00, 0x00,0x3f,0xff,0x00, 0x00,0x00,0xbf,0x00, 0x00,0x00,0x00,0xff, 0xff,0x00,0x00,0x00,
	0x00,0xbf,0x00,0x00, 0x00,0x00,0xff,0x00, 0x00,0x00,0x00,0xff, 0xbf,0x00,0x00,0x00, 0xff,0x3f,0x00,0x00
};

static const UINT8 pattern_9x10_ellipsoid[] =
{
	0x5f,0x00,0x00,0xff, 0xdf,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x00,0x5f,0x00,0xff, 0x00,0xdf,0x00,0xff,
	0x00,0x5f,0x00,0xff, 0x00,0x00,0x5f,0xff, 0x00,0x00,0xdf,0xff, 0x00,0x00,0x5f,0xff,
	0x7f,0x00,0x00,0xff, 0xff,0x00,0x00,0xff, 0x7f,0x00,0x00,0xff, 0x00,0x7f,0x00,0xff, 0x00,0xff,0x00,0xff,
	0x00,0x7f,0x00,0xff, 0x00,0x00,0x7f,0xff, 0x00,0x00,0xff,0xff, 0x00,0x00,0x7f,0xff,
	0x5f,0x00,0x00,0xff, 0xdf,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x00,0x5f,0x00,0xff, 0x00,0xdf,0x00,0xff,
	0x00,0x5f,0x00,0xff, 0x00,0x00,0x5f,0xff, 0x00,0x00,0xdf,0xff, 0x00,0x00,0x5f,0xff,
	0x1f,0x00,0x00,0xff, 0x7f,0x00,0x00,0xff, 0x1f,0x00,0x00,0xff, 0x00,0x1f,0x00,0xff, 0x00,0x7f,0x00,0xff,
	0x00,0x1f,0x00,0xff, 0x00,0x00,0x1f,0xff, 0x00,0x00,0x7f,0xff, 0x00,0x00,0x1f,0xff,
	0x00,0x1f,0x00,0xff, 0x00,0x00,0x1f,0xff, 0x00,0x00,0x7f,0xff, 0x00,0x00,0x1f,0xff, 0x1f,0x00,0x00,0xff,
	0x7f,0x00,0x00,0xff, 0x1f,0x00,0x00,0xff, 0x00,0x1f,0x00,0xff, 0x00,0x7f,0x00,0xff,
	0x00,0x5f,0x00,0xff, 0x00,0x00,0x5f,0xff, 0x00,0x00,0xdf,0xff, 0x00,0x00,0x5f,0xff, 0x5f,0x00,0x00,0xff,
	0xdf,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x00,0x5f,0x00,0xff, 0x00,0xdf,0x00,0xff,
	0x00,0x7f,0x00,0xff, 0x00,0x00,0x7f,0xff, 0x00,0x00,0xff,0xff, 0x00,0x00,0x7f,0xff, 0x7f,0x00,0x00,0xff,
	0xff,0x00,0x00,0xff, 0x7f,0x00,0x00,0xff, 0x00,0x7f,0x00,0xff, 0x00,0xff,0x00,0xff,
	0x00,0x5f,0x00,0xff, 0x00,0x00,0x5f,0xff, 0x00,0x00,0xdf,0xff, 0x00,0x00,0x5f,0xff, 0x5f,0x00,0x00,0xff,
	0xdf,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x00,0x5f,0x00,0xff, 0x00,0xdf,0x00,0xff,
	0x00,0x1f,0x00,0xff, 0x00,0x00,0x1f,0xff, 0x00,0x00,0x7f,0xff, 0x00,0x00,0x1f,0xff, 0x1f,0x00,0x00,0xff,
	0x7f,0x00,0x00,0xff, 0x1f,0x00,0x00,0xff, 0x00,0x1f,0x00,0xff, 0x00,0x7f,0x00,0xff,
	0x1f,0x00,0x00,0xff, 0x7f,0x00,0x00,0xff, 0x1f,0x00,0x00,0xff, 0x00,0x1f,0x00,0xff, 0x00,0x7f,0x00,0xff,
	0x00,0x1f,0x00,0xff, 0x00,0x00,0x1f,0xff, 0x00,0x00,0x7f,0xff, 0x00,0x00,0x1f,0xff
};

static const UINT8 pattern_8x8_mame_rgbtiny[] =
{
	0x00,0xff,0x00,0x00, 0x00,0x80,0x00,0x00, 0x00,0x80,0xff,0x00, 0x80,0x00,0xff,0x00,
	0x80,0x00,0x00,0x00, 0xff,0x00,0x00,0x00, 0xff,0xff,0xff,0x00, 0xff,0xff,0xff,0x00,

	0x00,0xff,0x00,0x00, 0x00,0x80,0x00,0x00, 0x00,0x80,0xff,0x00, 0x80,0x00,0xff,0x00,
	0x80,0x00,0x00,0x00, 0xff,0x00,0x00,0x00, 0xff,0xff,0xff,0x00, 0xff,0xff,0xff,0x00,

	0x00,0x80,0x00,0x00, 0x00,0x00,0x00,0x00, 0x80,0xff,0x80,0x00, 0xff,0x80,0x80,0x00,
	0x00,0x00,0x00,0x00, 0x80,0x00,0x00,0x00, 0xff,0xff,0xff,0x00, 0xff,0xff,0xff,0x00,

	0x00,0x00,0x00,0x00, 0x80,0x00,0x00,0x00, 0xff,0xff,0xff,0x00, 0xff,0xff,0xff,0x00,
	0x00,0x80,0x00,0x00, 0x00,0x00,0x00,0x00, 0x80,0xff,0x80,0x00, 0xff,0x80,0x80,0x00,

	0x80,0x00,0x00,0x00, 0xff,0x00,0x00,0x00, 0xff,0xff,0xff,0x00, 0xff,0xff,0xff,0x00,
	0x00,0xff,0x00,0x00, 0x00,0x80,0x00,0x00, 0x00,0x80,0xff,0x00, 0x80,0x00,0xff,0x00,

	0x80,0x00,0x00,0x00, 0xff,0x00,0x00,0x00, 0xff,0xff,0xff,0x00, 0xff,0xff,0xff,0x00,
	0x00,0xff,0x00,0x00, 0x00,0x80,0x00,0x00, 0x00,0x80,0xff,0x00, 0x80,0x00,0xff,0x00,

	0x00,0x00,0x00,0x00, 0x80,0x00,0x00,0x00, 0xff,0xff,0xff,0x00, 0xff,0xff,0xff,0x00,
	0x00,0x80,0x00,0x00, 0x00,0x00,0x00,0x00, 0x80,0xff,0x80,0x00, 0xff,0x80,0x80,0x00,

	0x00,0x80,0x00,0x00, 0x00,0x00,0x00,0x00, 0x80,0xff,0x80,0x00, 0xff,0x80,0x80,0x00,
	0x00,0x00,0x00,0x00, 0x80,0x00,0x00,0x00, 0xff,0xff,0xff,0x00, 0xff,0xff,0xff,0x00
};

static const UINT8 pattern_6x8_rgb_pattern[] =
{
	0xbf,0x00,0x00,0xff, 0x1f,0x00,0x00,0xff, 0x00,0xbf,0x00,0xff, 0x00,0x1f,0x00,0xff, 0x00,0x00,0xbf,0xff, 0x00,0x00,0x1f,0xff,
	0xff,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x00,0xff,0x00,0xff, 0x00,0x5f,0x00,0xff, 0x00,0x00,0xff,0xff, 0x00,0x00,0x5f,0xff,
	0xbf,0x00,0x00,0xff, 0x1f,0x00,0x00,0xff, 0x00,0xbf,0x00,0xff, 0x00,0x1f,0x00,0xff, 0x00,0x00,0xbf,0xff, 0x00,0x00,0x1f,0xff,
	0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
	0x00,0x1f,0x00,0xff, 0x00,0x00,0xbf,0xff, 0x00,0x00,0x1f,0xff, 0xbf,0x00,0x00,0xff, 0x1f,0x00,0x00,0xff, 0x00,0xbf,0x00,0xff,
	0x00,0x5f,0x00,0xff, 0x00,0x00,0xff,0xff, 0x00,0x00,0x5f,0xff, 0xff,0x00,0x00,0xff, 0x5f,0x00,0x00,0xff, 0x00,0xff,0x00,0xff,
	0x00,0x1f,0x00,0xff, 0x00,0x00,0xbf,0xff, 0x00,0x00,0x1f,0xff, 0xbf,0x00,0x00,0xff, 0x1f,0x00,0x00,0xff, 0x00,0xbf,0x00,0xff,
	0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00
};

static const UINT8 pattern_4x6_rgb_pattern[] =
{
	0xff,0x00,0x00,0xff, 0x00,0xff,0x00,0xff, 0x00,0x00,0xff,0xff, 0x00,0x00,0x00,0x00,
	0xff,0x00,0x00,0xff, 0x00,0xff,0x00,0xff, 0x00,0x00,0xff,0xff, 0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00,
	0x00,0x00,0xff,0xff, 0x00,0x00,0x00,0x00, 0xff,0x00,0x00,0xff, 0x00,0xff,0x00,0xff,
	0x00,0x00,0xff,0xff, 0x00,0x00,0x00,0x00, 0xff,0x00,0x00,0xff, 0x00,0xff,0x00,0xff,
	0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00, 0x00,0x00,0x00,0x00
};

static const UINT8 pattern_4x4_mame_rgbtiny[] =
{
	0x00,0xff,0x00,0x00, 0x00,0x00,0xff,0x00, 0xff,0x00,0x00,0x00, 0xff,0xff,0xff,0xff,
	0x00,0x00,0x00,0xff, 0xff,0xff,0xff,0xff, 0x00,0x00,0x00,0xff, 0xff,0xff,0xff,0xff,
	0xff,0x00,0x00,0x00, 0xff,0xff,0xff,0xff, 0x00,0xff,0x00,0x00, 0x00,0x00,0xff,0x00,
	0x00,0x00,0x00,0xff, 0xff,0xff,0xff,0xff, 0x00,0x00,0x00,0xff, 0xff,0xff,0xff,0xff
};

static const UINT8 pattern_4x4_rgb_pattern[] =
{
	0xff,0x00,0x00,0xff, 0x00,0xff,0x00,0xff, 0x00,0x00,0xff,0xff, 0x00,0x00,0x00,0x00,
	0xff,0x00,0x00,0xff, 0x00,0xff,0x00,0xff, 0x00,0x00,0xff,0xff, 0x00,0x00,0x00,0x00,
	0x00,0x00,0xff,0xff, 0x00,0x00,0x00,0x00, 0xff,0x00,0x00,0xff, 0x00,0xff,0x00,0xff,
	0x00,0x00,0xff,0xff, 0x00,0x00,0x00,0x00, 0xff,0x00,0x00,0xff, 0x00,0xff,0x00,0xff
};

static const UINT8 pattern_3x1_aperture_grille[] =
{
	0xff,0x00,0x00,0xff, 0x00,0xff,0x00,0xff, 0x00,0x00,0xff,0xff
};

// patterns from blit.c

#undef RGB
#define RGB	0xff,0xff,0xff,0x00
#define RGb	0xff,0xff,0x00,0x00
#define RgB	0xff,0x00,0xff,0x00
#define Rgb	0xff,0x00,0x00,0x00
#define rGB	0x00,0xff,0xff,0x00
#define rGb	0x00,0xff,0x00,0x00
#define rgB	0x00,0x00,0xff,0x00
#define rgb	0x00,0x00,0x00,0x00

static const UINT8 pattern_16x8_rgb_pattern[] =
{
	rgb,rgb,rgb,rgb,rgb,rgb,rgb,rgb, rgb,rgb,rgb,rgb,rgb,rgb,rgb,rgb,
	rGb,rgB,Rgb,rgb,rGb,rgB,Rgb,rgb, rGb,rgB,Rgb,rgb,rGb,rgB,Rgb,rgb,
	rGb,rgB,Rgb,rgb,rGb,rgB,Rgb,rgb, rGb,rgB,Rgb,rgb,rGb,rgB,Rgb,rgb,
	rGb,rgB,Rgb,rgb,rGb,rgB,Rgb,rgb, rGb,rgB,Rgb,rgb,rGb,rgB,Rgb,rgb,
	rgb,rgb,rgb,rgb,rgb,rgb,rgb,rgb, rgb,rgb,rgb,rgb,rgb,rgb,rgb,rgb,
	rgb,rGb,rgB,Rgb,rgb,rGb,rgB,Rgb, rgb,rGb,rgB,Rgb,rgb,rGb,rgB,Rgb,
	rgb,rGb,rgB,Rgb,rgb,rGb,rgB,Rgb, rgb,rGb,rgB,Rgb,rgb,rGb,rgB,Rgb,
	rgb,rGb,rgB,Rgb,rgb,rGb,rgB,Rgb, rgb,rGb,rgB,Rgb,rgb,rGb,rgB,Rgb
};

static const UINT8 pattern_16x6_rgb_pattern[] =
{
	rgB,Rgb,rgB,Rgb,rgB,Rgb,rgB,Rgb, rgB,Rgb,rgB,Rgb,rgB,Rgb,rgB,Rgb,
	rgB,rGb,rgB,rGb,rgB,rGb,rgB,rGb, rgB,rGb,rgB,rGb,rgB,rGb,rgB,rGb,
	Rgb,rGb,Rgb,rGb,Rgb,rGb,Rgb,rGb, Rgb,rGb,Rgb,rGb,Rgb,rGb,Rgb,rGb,
	Rgb,rgB,Rgb,rgB,Rgb,rgB,Rgb,rgB, Rgb,rgB,Rgb,rgB,Rgb,rgB,Rgb,rgB,
	rGb,rgB,rGb,rgB,rGb,rgB,rGb,rgB, rGb,rgB,rGb,rgB,rGb,rgB,rGb,rgB,
	rGb,Rgb,rGb,Rgb,rGb,Rgb,rGb,Rgb, rGb,Rgb,rGb,Rgb,rGb,Rgb,rGb,Rgb
};

static const UINT8 pattern_16x4_rgb_pattern[] =
{
	rgb,rgb,rgb,rgb,RgB,RGb,rGB,rgb, rgb,rgb,rgb,rgb,RgB,RGb,rGB,rgb,
	RgB,RGb,rGB,rgb,RgB,RGb,rGB,rgb, RgB,RGb,rGB,rgb,RgB,RGb,rGB,rgb,
	RgB,RGb,rGB,rgb,rgb,rgb,rgb,rgb, RgB,RGb,rGB,rgb,rgb,rgb,rgb,rgb,
	RgB,RGb,rGB,rgb,RgB,RGb,rGB,rgb, RgB,RGb,rGB,rgb,RgB,RGb,rGB,rgb
};

static const UINT8 pattern_16x3_rgb_pattern[] =
{
	Rgb,rgB,Rgb,rgB,Rgb,rgB,Rgb,rgB, Rgb,rgB,Rgb,rgB,Rgb,rgB,Rgb,rgB,
	rGb,Rgb,rGb,Rgb,rGb,Rgb,rGb,Rgb, rGb,Rgb,rGb,Rgb,rGb,Rgb,rGb,Rgb,
	rgB,rGb,rgB,rGb,rgB,rGb,rgB,rGb, rgB,rGb,rgB,rGb,rgB,rGb,rgB,rGb
};

#undef RGB
#undef RGb
#undef RgB
#undef Rgb
#undef rGB
#undef rGb
#undef rgB
#undef rgb

// pattern info

static struct { const char *name; const UINT8 *data; } builtin_patterns[] =
{
	// d3d RGB effects patterns
	{ "18x10_large_round.i.rgb", pattern_18x10_large_round },
	{ "12x10_large_ellipsoid.i.rgb", pattern_12x10_large_ellipsoid },
	{ "10x6_large_dot.i.rgb", pattern_10x6_large_dot },
	{ "9x10_ellipsoid.i.rgb", pattern_9x10_ellipsoid },
	{ "8x8_mame_rgbtiny.i.rgb", pattern_8x8_mame_rgbtiny },
	{ "6x8_rgb_pattern.i.rgb", pattern_6x8_rgb_pattern },
	{ "4x6_rgb_pattern.i.rgb", pattern_4x6_rgb_pattern },
	{ "4x4_mame_rgbtiny.i.rgb", pattern_4x4_mame_rgbtiny },
	{ "4x4_rgb_pattern.i.rgb", pattern_4x4_rgb_pattern },
	{ "3x1_aperture_grille.i.rgb", pattern_3x1_aperture_grille },

	// patterns from blit.c
	{ "16x8_rgb_pattern.i.rgb", pattern_16x8_rgb_pattern },
	{ "16x6_rgb_pattern.i.rgb", pattern_16x6_rgb_pattern },
	{ "16x4_rgb_pattern.i.rgb", pattern_16x4_rgb_pattern },
	{ "16x3_rgb_pattern.i.rgb", pattern_16x3_rgb_pattern },

	{ NULL, NULL }
};
