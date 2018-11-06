#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#define COL 3
#define ROW 3


void init_board(char arr[COL][ROW], int col, int row);
void print_board(char arr[COL][ROW], int col, int row);
void player_move(char arr[COL][ROW], int col, int row);
void computer_move(char arr[COL][ROW],int col, int row);
char check_win(char arr[COL][ROW], int col,int row);
int is_full(char arr[COL][ROW], int col, int row);
