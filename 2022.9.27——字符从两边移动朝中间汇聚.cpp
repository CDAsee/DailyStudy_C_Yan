#define _CRT_SECURE_NO_WARNINGS 1
 
#include<stdio.h>
int main()        //�ַ��������ƶ����м���
{
	char a[] = "HelloWorld";     //�����е��ַ���ĩβ��һ�����ص�\n��һ���ַ�
	char b[] = "##########";
	int right = sizeof(a) / sizeof(a[0])-2;   //strlen(a)�����ַ������ȣ����ƺ������ص�\n
	int c = 0;
	int left = 0;
	while(left <= right)
	{
		b[left] = a[left];
		b[right] = a[right];
		printf("%s\n", b);
		left++;
		right--;
	}
	return 0;

}
//���н��
//H########d
//He######ld
//Hel####rld
//Hell##orld
//HelloWorld