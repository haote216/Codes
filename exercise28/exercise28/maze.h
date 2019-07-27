#pragma once 

#define M 6
static int maze[M][M] = {
	{0, 0, 0, 0, 0, 0},
	{0, 0, 1, 0, 0, 0},
	{0, 0, 1, 0, 0, 0},
	{0, 0, 1, 1, 1, 0},
	{0, 0, 1, 0, 1, 1},
	{0, 0, 1, 0, 0, 0}
};


int CheckAccess(Pos next);
int GetMazePath(Pos entry, Pos exit);
void TestMaze();