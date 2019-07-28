#pragma once 
#include"Stack.h"

#define M 6
static int maze[M][M] = {
	{0, 0, 0, 0, 0, 0},
	{0, 0, 1, 1, 1, 0},
	{0, 0, 1, 0, 1, 0},
	{0, 0, 1, 1, 1, 1},
	{0, 0, 1, 0, 0, 0},
	{0, 0, 1, 0, 0, 0}
};


int CheckAccess(Pos cur,Pos next);
int GetMazePath(Pos entry, Pos exit);
void TestMaze();