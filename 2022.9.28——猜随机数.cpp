#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//猜随机数
int main()
{
	int i=0;
	i=rand();
	int a = 0;
	int left = 0;
	int right = 0;
	printf("输入你猜的数字：");
	scanf("%d", &a);
	while (a != i)
	{
		if (a < i)
		{
			printf("猜小了\n");
		}
		else if (a > i)
		{
			printf("猜大了\n");
		}
		scanf("%d", &a);
	}
	printf("猜对了!\n");
	return 0;
}