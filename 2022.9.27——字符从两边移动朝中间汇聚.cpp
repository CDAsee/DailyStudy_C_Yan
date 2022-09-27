#define _CRT_SECURE_NO_WARNINGS 1
 
#include<stdio.h>
int main()        //字符从两边移动朝中间汇聚
{
	char a[] = "HelloWorld";     //数组中的字符串末尾有一个隐藏的\n算一个字符
	char b[] = "##########";
	int right = sizeof(a) / sizeof(a[0])-2;   //strlen(a)计算字符串长度，不计后面隐藏的\n
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
//运行结果
//H########d
//He######ld
//Hel####rld
//Hell##orld
//HelloWorld