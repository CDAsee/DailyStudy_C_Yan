#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()         //����n�Ľ׳˵ĺ�
{
	int a = 1;
	int b = 1;
	int n = 1;
	int m = 1;
	int sum = 0;
	scanf("%d", &n);
	for (m = 1; m < (n + 1); m++)
	{                                                                             //�Ľ�����,����ڲ�forѭ��
		for (a = 1, b = 1; a < (m + 1); a++)                                     //b=b*m;
		{                                                                     //sum=sum+b; 
			b = b * a;
		}
		sum = sum + b;

	}
	printf("n�Ľ׳˵ĺ�=%d", sum);

	return 0;

}