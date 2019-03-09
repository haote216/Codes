#include"Stack.h"
void StackInit(Stack* s)
{
	assert(s);
	s->_array = (STDatatype*)malloc(capacity*sizeof(STDatatype));
	s->_capacity = capacity;
	s->_top = 0;
}
void StackPush(Stack* s, STDatatype data)
{
	assert(s);
	if (s->_top == s->_capacity)
	{
		s->_array = (STDatatype*)malloc(capacity*sizeof(STDatatype));
	}
	s->_array[s->_top++] = data;
}
void StackPop(Stack* s)
{
	assert(s);
	s->_top--;
}
STDatatype StackTop(Stack* s)
{
	assert(s);
	return s->_array[s->_top - 1];
}
int StackEmpty(Stack* s)
{
	assert(s);
	if (s->_top == 0)
	{
		printf("у╩ря©у\n");
		return 1;
	}
	return 0;
}
void StackPrintf(Stack* s)
{
	char a = 0;
	a = StackTop(s);
	//int b = 'a' - '0';
	if (a >= 10)
	{
		printf("%c\n", ':'-a+10);
	}
	else
	{
		printf("%c\n", a);
	}
	
	/*
	for (int i = 0; i<s->_top; i++)
	{
		printf("%d\n", s->_array[i]);
	}
	*/
}