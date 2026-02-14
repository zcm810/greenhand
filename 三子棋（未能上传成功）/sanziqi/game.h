#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 3
#define COL 3
void Init_board(char board[ROW][COL],int row,int col);//          棋子初始化的函数
void menu();
void display_board(char board[ROW][COL], int row, int col);