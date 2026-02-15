#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ROW 11
#define COL 11
#define ROW0 9
#define COL0 9
#define easy_count 10

#include<stdlib.h>
#include<time.h>
void menu(void);
void game();
void mine_board();                                                    //ÕæÊµÉ¨À×¼üÅÌ
void display_board();                                                 //Õ¹Ê¾É¨À×¼üÅÌ 
void Init(char arr[ROW][COL], int row, int col);                      //³õÊ¼»¯É¨À×¼üÅÌ
void print_mine_board(char arr[ROW][COL], int row, int col);          //´òÓ¡É¨À×¼üÅÌ
void set_boom(char arr[ROW][COL], int row, int col);                  //ÉèÖÃÕ¨µ¯
void Find(char arr1[ROW][COL], char arr2[ROW][COL], int row, int col);
int get_mine_count(char board[ROW][COL], int x, int y);