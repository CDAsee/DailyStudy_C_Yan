#define _CRT_SECURE_NO_WARNINGS 1
 
#include<stdio.h>
int main()         //����n�Ľ׳�
{ 
	int a = 1;
	int b = 1;
	int n = 1;
	scanf("%d", &n);
	for(a=1;a<n+1;a++)
	{
		b = b * a;
	
	}
	printf("n�Ľ׳�=%d", b);

	return 0;

}