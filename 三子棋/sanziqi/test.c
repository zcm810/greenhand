#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

int main()
{
	int input = 0;
	char arr[ROW][COL] = { 0 };//                                        创建棋子的二维数组
	do
	{
		menu();
	
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出游戏");
			break;
		}
		else if (input == 1)
		{
			printf("进入游戏\n");//                                 初始化棋子的数组
			Init_board(arr, ROW, COL);
			display_board(arr[ROW][COL],ROW, COL);			//                                                   打印棋盘
		}
		else
		{
			printf("输入错误\n");
		}
	}
	while (input);
	


























	return 0;
}