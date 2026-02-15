#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu(void)
{
	printf("\n");
	printf("***************************\n");
	printf("*********1. play **********\n");
	printf("*********0. exit **********\n");
	printf("***************************\n");

}
//初始化两个键盘
void Init(char arr[ROW][COL], int row, int col, char a)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = a;
		}
	}
	
	
}
void print_mine_board(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("********扫雷游戏********\n\n");
	for (j = 0; j < col-1; j++)
	{
		printf("%d ", j);
	}
	
	for (i = 1; i < row-1; i++)
	{
		printf("\n");
		printf("%d ", i);
		for (j = 1; j < col-1; j++)
		{
			printf("%c ", arr[i][j]);
		
		}

	}
	printf("\n");

}

void set_boom(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0; 
	int count = 0;
	while (count < easy_count)
	{
		i = rand() % row + 1;
		j = rand() % col + 1;
		if (arr[i][j] == '0')
		{
			arr[i][j] = '1';
			count++;
		}
	}
}


int get_mine_count(char board[ROW][COL], int x, int y)
{
	return (board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8 * '0');
}

void Find(char arr1[ROW][COL], char arr2[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	
	while (1)
	{
		printf("请输入要排查的坐标");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (arr1[x][y] == '1')
			{
				printf("你失败了");
				print_mine_board(arr1, ROW, COL);
				break;
			}
			else
			{
				win++;
				int count = 0;
				count = get_mine_count(arr1, x, y);
				arr2[x][y] = count + '0';
				print_mine_board(arr2, ROW, COL);
			}
		}
		else
		{
			printf("输入错误，请重新输入");

		}
		}
	if (win > ROW0*COL0-easy_count)
	{
		printf("恭喜你赢了");
		print_mine_board(arr1, ROW, COL);


	}
	}
	
	


void game()
{
	char mine_board[ROW][COL] = { 0 };
	char display_board[ROW][COL] = { 0 };

	Init(mine_board, ROW, COL,'0');
	Init(display_board, ROW, COL,'*');
	//埋雷
	set_boom(mine_board, ROW0, COL0);

	//打印展示的扫雷键盘
	print_mine_board(display_board,ROW, COL);
	//print_mine_board(mine_board, ROW, COL);

	//排雷
	Find(mine_board, display_board, ROW0, COL0);


}



