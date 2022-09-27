#define _CRT_SECURE_NO_WARNINGS 1
 
#include<stdio.h>
int main()         //二分法查找(顺序数)位数   查找难度：log2的n次方
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = sizeof(a)/sizeof(a[0]);
	int num = 0;
	int b = 0;
	int mid = 0;
	printf("输入你想查找的位数的值（1-10)\n");
	scanf("%d", &b);        //scanf ("%d\n",&b);   scanf函数包含\n无需多余填写
	
	while (left <= right)
	{
		mid = (left + right) / 2;

		if (b < a[mid])
		{
			right = mid - 1;
		}
		else if (b > a[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("查找成功，位数=%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("未查找到指定值位数\n");
	}

	return 0;

}