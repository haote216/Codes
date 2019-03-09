#include"Stack.h"
void fun(Stack* s,char arr[])
{
	int l = strlen(arr);
	StackInit(s);
	for (int i = 0;i<l; i++)
	{
		if (arr[i] <= '9' && arr[i] >= '0')
		{
			StackPush(s, arr[i]);
		}

		if (arr[i] == '+')
		{
			int i = StackTop(s) - '0';
			StackPop(s);
			int j = StackTop(s) - '0';
			StackPop(s);
			int k = i + j;
			StackPush(s, k + '0');
			
		}
		if (arr[i] == '-')
		{
			int i = StackTop(s) - '0';
			StackPop(s);
			int j = StackTop(s) - '0';
			StackPop(s);
			int k = j - i;
			StackPush(s, k + '0');
		}
		if (arr[i] == '*')
		{
			int i = StackTop(s) - '0';
			StackPop(s);
			int j = StackTop(s) - '0';
			StackPop(s);
			int k = i * j;
			StackPush(s, k + '0');
		}
		if (arr[i] == '/')
		{
			int i = StackTop(s) - '0';
			StackPop(s);
			int j = StackTop(s) - '0';
			StackPop(s);
			int k = j / i;
			StackPush(s, k + '0');
		}
	}
}
void test()
{
	Stack s;
	char arr[] = { '9', '2', '3', '+', '-', '6', '*', '2', '/' ,'\0'};
	fun(&s, arr);
	StackPrintf(&s);
}
int main()
{
	test();
	system("pause");
	return 0;
}