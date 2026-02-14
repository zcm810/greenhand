#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void menu()
{
	printf("*********************************\n");
	printf("*************1. play*************\n"); 
	printf("*************0. exit*************\n");
	printf("*********************************\n");
 }

void display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;//                                                        
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if(j < COL-1)
			printf(" %c |",board[i][j]);//                                         这里还需要输入棋子的地址
			else
				printf(" %c ", board[i][j]);//                                     这里还需要输入棋子的地址

		}
		printf("\n");
		for (j = 0; j < COL; j++)
		{
			if (j < COL-1 )
				printf("---|");//        
			else  if ( j < COL )
				printf("---");//        

		}
		printf("\n");
	}
}


void Init_board(char arr[ROW][COL],int row, int col)//                                              定义初始化数组的函数
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';

		}

	}
}