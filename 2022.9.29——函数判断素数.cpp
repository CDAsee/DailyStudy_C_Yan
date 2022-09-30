#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//用函数来判断素数
int sushu(int a)
{
	int b = 1;
	for (b = 2; b < = sqrt(a); b++)
	{
		if (a % b == 0)
			return 0;

	}
	return 1;
}

int main()
{
	int count = 0;
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (sushu(i) == 1)
		{
			count++;
			printf("%d  ", i);
		}
		else
			continue;
	}
	printf("%d", count);
	return 0;
}