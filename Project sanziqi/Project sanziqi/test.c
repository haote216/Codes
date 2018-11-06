#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("********三子棋游戏********\n");
	printf("******0 exit  1 play******\n");
	printf("**************************\n");
}
void play_game()
{
	char board[COL][ROW];
	char win = 0;
	srand((unsigned int)time(NULL));
	init_board(board,COL,ROW);
	//print_board(board, COL, ROW);
	while (1)
	{
		player_move(board, COL, ROW);
		win = check_win(board, COL, ROW);
		if (win != ' ')
			break;
		//print_board(board, COL, ROW);
		

		computer_move(board, COL, ROW);
		win = check_win(board, COL, ROW);
		if (win != ' ')
			break;
		print_board(board, COL, ROW);
		
	}
	if (win == 'X')
		printf("玩家赢\n");
	else if (win == 'O')
		printf("电脑赢\n");
	else if (win == ' ')
		printf("平局\n");
}

void test()
{
	int input = 0;
	do
	{
		menu();	
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出成功\n");
			break;
		case 1:
			play_game();
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	system("pause");
	return 0;
}
