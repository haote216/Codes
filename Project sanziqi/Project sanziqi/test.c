#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("********��������Ϸ********\n");
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
		printf("���Ӯ\n");
	else if (win == 'O')
		printf("����Ӯ\n");
	else if (win == ' ')
		printf("ƽ��\n");
}

void test()
{
	int input = 0;
	do
	{
		menu();	
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳��ɹ�\n");
			break;
		case 1:
			play_game();
			break;
		default:
			printf("ѡ�����\n");
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
