#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void Bit_Set(unsigned char *p_data, unsigned char position, int flag)
{
	if (position > 8 || position < 1)
	{
		printf("Error!!\n");
		return;
	}
	unsigned char a = 1;
	a = a << (position - 1);
	if (flag == 0)
	{
		a = ~a;
		*p_data = *p_data&a;
	}
	if (flag == 1)
	{
		*p_data = *p_data | a;
	}
}