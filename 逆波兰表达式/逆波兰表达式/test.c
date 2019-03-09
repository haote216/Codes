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
			if (k >= 10)
			{
				StackPush(s, k-10+ '0');
			}
			else
			{
				StackPush(s, k + '0');
			}
			
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
			if (k >= 10)
			{
				StackPush(s, k - 10 + ':');
			}
			else
			{
				StackPush(s, k + ':');
			}
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
	char arr[] = { '9', '2', '3', '+', '-', '5', '*', '2', '/' ,'\0'};
	fun(&s, arr);
	StackPrintf(&s);
}
int main()
{
	test();
	system("pause");
	return 0;
}