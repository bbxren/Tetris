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