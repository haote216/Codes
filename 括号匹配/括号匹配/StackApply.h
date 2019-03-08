#define _CRT_SECURE_NO_WARNINGS 1
 
#include"Stack.h"
#include"string.h"
#include"stdio.h"

int IsBracket(char c)
{
	if (('(' == c || ')' == c) ||
		('{' == c || '}' == c) ||
		('[' == c || ']' == c))
		return 1;
	return 0; 
}
int MatchBrackets(const char* pStr)
{
	int i = 0;
	int strLen = 0;
	Stack s;
	if (NULL == pStr)
		return 0;
	StackInit(&s);
	strLen = strlen(pStr);
	for (; i < strLen; ++i)
	{
		if (!IsBracket(pStr[i]))
			continue;
		else
		{
			if ('(' == pStr[i] || '{' == pStr[i] || '[' == pStr[i])
			{
				StackPush(&s, pStr[i]);
			}
			else
			{
				char c = 0;
				if (StackEmpty(&s))
				{
					printf("ÓÒÀ¨ºÅ¶àÓÚ×óÀ¨ºÅ\n");
					return 0;
				}
				else
				{
					c = StackTop(&s);
					if (('(' == c && ')' == pStr[i]) ||
						('{' == c && '}' == pStr[i]) ||
						('[' == c && ']' == pStr[i]))
					{
						StackPop(&s);
					}
					else
					{
						printf("×óÓÒÀ¨ºÅ´ÎÐòÆ¥Åä²»ÕýÈ·\n");
						return 0;
					}
				}
			}

		}
	}
	if (!StackEmpty(&s))
	{
		printf("×óÀ¨ºÅ¶àÓÚÓÒÀ¨ºÅ\n");
		return 0;
	}
	printf("×óÓÒÀ¨ºÅÆ¥ÅäÕýÈ·\n");
	return 1;
}
void test()
{
	char a[] = "(())abc{[(])}";
	char b[] = "(()))abc{[]}";
	char c[] = "(()()abc{[]}";
	char d[] = "(())abc{[]()}";
	MatchBrackets(a);
	MatchBrackets(b);
	MatchBrackets(c);
	MatchBrackets(d);
}