#include"Stack.h"

void StackInit(Stack *s)
{
	assert(s);
	s->_top = 0;
}
void StackDestory(Stack* s)
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
	assert(s);
	s->_top--;
}
int StackEmpty(Stack *s)
{
	assert(s);
	return s->_top == 0 ? 0 :1;
}
int StackSize(Stack *s)
{
	return s->_top;
}
STDatatype StackTop(Stack *s)
{
	assert(s->_array && s->_top >0);
	return s->_array[s->_top - 1];
}