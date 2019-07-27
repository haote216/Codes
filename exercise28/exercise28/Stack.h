#pragma once 
#include<stdio.h>
#include<assert.h>
#include<malloc.h>
#include<windows.h>


typedef struct Pos  //зјБъ
{
	int _row;
	int _col;
}Pos;

#define N 10
typedef Pos STDataType;

typedef struct Stack{
	STDataType _array[N];
	int _top;
}Stack;
void StackInit(Stack *s);
void StackDestory(Stack* s);
void StackPush(Stack *s, STDataType data);
void StackPop(Stack *s);
int StackEmpty(Stack *s);
int StackSize(Stack *s);
STDataType StackTop(Stack *s);