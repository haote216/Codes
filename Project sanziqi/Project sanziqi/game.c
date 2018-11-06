#include"game.h"


void init_board(char arr[COL][ROW], int col, int row)
{
	memset(arr, ' ',sizeof(arr[0][0])*col*row);
}

void print_board(char arr[COL][ROW], int col, int row)
{
	int i = 0;
	for (i = 0; i < col; i++)
	{
		printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);
		if (i != col-1)
			printf("---|---|---\n");
	}
}
void player_move(char arr[COL][ROW], int col, int row)
{
		while (1)
		{
			int x = 0;
			int y = 0;
			printf("请输入你的坐标:\n");
			scanf("%d %d", &x, &y);
			if (((x >= 1) && (x <= 3)) && ((y >= 1) && (y <= 3)))
			{
				if (arr[x - 1][y - 1] == ' ')
				{
					arr[x - 1][y - 1] = 'X';
					break;
				}
				else
				{
					printf("您输入的坐标已被占用\n");
				}		
			}
			else
				printf("您输入的坐标不合法\n");	
		}
}
void computer_move(char arr[COL][ROW], int col, int row)
{
	int x = rand() % 3;
	int y = rand() % 3;
	while (1)
	{
		if (arr[x][y] == ' ')
		{
			arr[x][y] = 'O';
			break;
		}
	}
}
static int is_full(char arr[COL][ROW], int col, int row)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (arr[i][j] == ' ')
				return 0; 
		}
	}
	return 1;
}
char check_win(char arr[COL][ROW], int col, int row)
{
	int i = 0;
	for (i = 0; i < col; i++)
	{
		if ((arr[i][0] == arr[i][1]) && (arr[i][1] == arr[i][2]) && (arr[i][0] != ' '))
			return arr[i][0];
	}
	for (i = 0; i < row; i++)
	{
		if ((arr[0][i] == arr[1][i]) && (arr[1][i] == arr[2][i]) && (arr[0][i] != ' '))
			return arr[0][i];
	}
	if (((arr[0][0]) == arr[1][1]) && (arr[1][1] == arr[2][2]) && (arr[1][1] != ' '))
		return arr[1][1];
	if (((arr[2][0]) == arr[1][1]) && (arr[1][1] == arr[0][2]) && (arr[1][1] != ' '))
		return arr[1][1];
	if (is_full(arr, col, row))
		return 'q';
	return ' ';
}
