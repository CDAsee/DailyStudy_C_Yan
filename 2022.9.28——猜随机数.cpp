#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//�������
int main()
{
	int i=0;
	i=rand();
	int a = 0;
	int left = 0;
	int right = 0;
	printf("������µ����֣�");
	scanf("%d", &a);
	while (a != i)
	{
		if (a < i)
		{
			printf("��С��\n");
		}
		else if (a > i)
		{
			printf("�´���\n");
		}
		scanf("%d", &a);
	}
	printf("�¶���!\n");
	return 0;
}