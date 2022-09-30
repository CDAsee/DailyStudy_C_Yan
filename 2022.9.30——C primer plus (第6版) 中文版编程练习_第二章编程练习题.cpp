#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()          //2-1
//{
//	printf("闫慷龙\n");
//	printf("闫\n慷龙\n");
//	printf("闫");
//	printf("慷龙");
//	return 0;
//}

//int main()            //2-2
//{
//	printf("闫慷龙\n江苏连云港\n");
//  return 0;
//}

//int main()              //2-3
//{
//	int year = 22;
//	int day = year * 365;
//	printf("年纪：%d  天数：%d",year, day);
//	return 0;
//
//}


//int jolly()                //2-4
//{
//	printf("For he's a jolly good fellow!\n");
//	return 0;
//
//}
//
//int deny()
//{
//	printf("Which nobody can deny!\n");
//	return 0;
//}
//int main()
//{
//	jolly();
//	jolly();
//	jolly();
//	deny();
//	return 0;
//}

//int br()           //2-5
//{
//	printf("Brazil,Russia ");
//	return 0;
//}
//int ic()
//{
//	printf("India,China ");
//	return 0;
//}
//int main()
//{
//	br(); 
//	ic(); printf("\n");
//	br(); printf("\n");
//	ic(); printf("\n");
//	return 0;
//}


//int main()               //2-6
//{
//	int toes = 10;
//	int square = toes * toes;
//	int cube = square* toes;
//	printf("tones=%d   平方=%d   立方=%d", toes, square, cube);
//	return 0;
//}

//int smile()                     //2-7
//{
//	printf("Smile!");
//	return 0;
//}
//
//int main()
//{
//	smile(); smile(); smile(); printf("\n");
//	smile(); smile(); printf("\n");
//    smile(); printf("\n");
//	return 0;
//}



int two();                 //2-8

int one_three()
{
	printf("one\n");
	two();
	printf("three\n");
	return 0;
}

int two()
{
	printf("two\n");
	return 0;
}

int main()
{
	printf("starting now:\n");
	one_three();
	printf("done!");
	return 0;
}