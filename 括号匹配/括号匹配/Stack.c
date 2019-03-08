#include"Stack.h"
#include"assert.h"
#include<stdio.h>

void StackInit(Stack *s)
{
	assert(s);
	s->_top = 0;
}
void StackPush(Stack *s, STDatatype data)
{
	assert(s);
	if (N == s->_top)
	{
		printf("Õ»ÒÑ¾­ÂúÁË");
		return;
	}
	s->_array[s->_top++] = data;
}
void StackPop(Stack *s)
{
	if (StackEmpty(s))
		return;
	s->_top--;
}
int StackEmpty(Stack *s)
{
	assert(s);
	return s->_top==0;	 
}
STDatatype StackTop(Stack *s)
{
	assert(!StackEmpty(s));
	return s->_array[s->_top-1];
}