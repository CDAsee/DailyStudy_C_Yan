#include<stdio.h>
//ð�����򣬽�������
void compare(int a[10], int sz)
{
	int i = 0;
	int j = 0;
	int b = 0;
	for (i = 0; i < sz-1; i++)//ȷ��ѭ������
	{
		for(j=0;j<sz-1-b;j++)//ȷ��ÿ��ѭ���м�������

		if (a[j] < a[j + 1])
		{
			int tmp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = tmp;
		}
		b++;
	}

}

int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(a) / sizeof(a[0]);
	int j = 0;
	compare(a,sz);
	for (j = 0; j < sz; j++)
	{
		printf("%d   ",a[j]);
	}
	printf("\n");
	return 0;
}