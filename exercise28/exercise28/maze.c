#include"maze.h"
#include"Stack.h"

int CheckAccess(Pos next)
{
	if (next._row >= 0 && next._row < N
		&& next._col >= 0 && next._col < N
		&& maze[next._col][next._row] == 1)
	{
		return 1;
	}
	else
		return 0;
}

int GetMazePath(Pos entry, Pos exit)
{
	Stack path;
	StackInit(&path);
	StackPush(&path, entry);

	while (StackEmpty(&path))
	{
		Pos cur = StackTop(&path);
		maze[cur._col][cur._row] = 2;
		if (cur._col == exit._col
			&& cur._row == exit._row)
		{
			//出口
			StackDestory(&path);
			return 1;
		}

		Pos next;

		//上
		next = cur;
		next._row -= 1;
		if (CheckAccess(next))
		{
			StackPush(&path, next);
			continue;
		}

		//下
		next = cur;
		next._row += 1;
		if (CheckAccess(next))
		{
			StackPush(&path, next);
			continue;
		}

		//左
		next = cur;
		next._col -= 1;
		if (CheckAccess(next))
		{
			StackPush(&path, next);
			continue;
		}

		//右
		next = cur;
		next._col += 1;
		if (CheckAccess(next))
		{
			StackPush(&path, next);
			continue;
		}


		StackPop(&path);
	}
	return 0;
}  

void PrintMaze()
{
	for (size_t i = 0; i < M; ++i)
	{
		for (size_t j = 0; j < M; ++j)
		{
			printf("%d ", maze[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void TestMaze()
{
	Pos entry;
	entry._row = 5;
	entry._col = 2;

	Pos exit;
	exit._row = 4;
	exit._col = 5;
	PrintMaze();
	printf("是否有出口：%d\n", GetMazePath(entry, exit));
	PrintMaze();
}