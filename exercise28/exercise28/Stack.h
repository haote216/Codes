#pragma once 
#include<stdio.h>
#include<assert.h>
#include<malloc.h>
#include<windows.h>

#define N 10
typedef char STDatatype;

typedef struct Stack{
	STDatatype _array[N];
	int _top;
}Stack;
void StackInit(Stack *s);
void StackDestory(Stack* s);
void StackPush(Stack *s, STDatatype data);
void StackPop(Stack *s);
int StackEmpty(Stack *s);
int StackSize(Stack *s);
STDatatype StackTop(Stack *s);