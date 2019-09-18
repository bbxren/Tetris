struct BOARD  //底板
{
	int var;  //0&1
	int color;	//方块颜色
}Table_board[Vertical_boxs][Horizontal_boxs];

struct SHAPE
{
	char box[2];
	int color; //方块颜色
	int next; //方块编号
};

struct SHAPE shapes[MAX_BOX]=
{
	{0x88, 0xc0, CYAN, 1},
	{0xe8, 0x0,  CYAN, 2},
	{0xC4, 0x40, CYAN, 3},
	{0x2e, ox40, CYAN, 0},

	{0x44, 0xc0, MAGEMTA, 5},
	{0x8e, 0x80, MAGEMAT, 6},
	{0xc8, 0x80, MAGEMAT, 7},
	{0x8e, 0x0,  MAGEMAT, 4},

	{0x8c, 0x40, YELLOW, 9},
	{0x6c, 0x0,  YELLOW, 8},

	{0x4c,  0x80,   BROWN,  11},
    {0xc6,  0x0,    BROWN,  10}, 

	{0x4e,  0x0,    WHITE,  13},
    {0x8c,  0x80,   WHITE,  14},
    {0xe4,  0x0,    WHITE,  15},
    {0x4c,  0x40,   WHITE,  12},

	{0x88,  0x88,   RED,    17},
    {0xf0,  0x0,    RED,    16},

	 {0xcc,  0x0,    BLUE,   18}

};

