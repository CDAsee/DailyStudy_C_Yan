#define _CRT_SECURE_NO_WARNINGS 1
 
#include<stdio.h>
int main()         //���ַ�����(˳����)λ��   �����Ѷȣ�log2��n�η�
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int left = 0;
	int right = sizeof(a)/sizeof(a[0]);
	int num = 0;
	int b = 0;
	int mid = 0;
	printf("����������ҵ�λ����ֵ��1-10)\n");
	scanf("%d", &b);        //scanf ("%d\n",&b);   scanf��������\n���������д
	
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
			printf("���ҳɹ���λ��=%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("δ���ҵ�ָ��ֵλ��\n");
	}

	return 0;

}