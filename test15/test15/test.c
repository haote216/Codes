#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<windows.h>
//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�
//
//
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//
//3.ģ��ʵ��strcpy
//4.ģ��ʵ��strcat
void my_strcpy(char * dest, char * str)
{
	assert(dest != NULL);
	assert(str != NULL);
	while (*dest++ = *str++)
	{
		;
	}
}
int main()
{
	char str1[] = "haote";
	char str2[40] = { 0 };
	//char *str3 = "abcefghjklkjhgfd";  Ϊʲô�������
	char str3[40] = { 0 };
    my_strcpy(str2, str1);
	my_strcpy(str3, "�����ɹ�");
	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
	system("pause");
	return 0;
}