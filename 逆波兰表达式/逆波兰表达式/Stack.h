#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<assert.h>

#define capacity 100
typedef char STDatatype;
typedef struct Stack
{
	STDatatype *_array;
	int _top;
	int _capacity;
}Stack;
void StackInit(Stack* s);
void StackPush(Stack* s,STDatatype data);
void StackPop(Stack* s);
STDatatype StackTop(Stack* s);
int StackEmpty(Stack* s);
void StackPrintf(Stack* s);
void fun(Stack* s, char arr[]);