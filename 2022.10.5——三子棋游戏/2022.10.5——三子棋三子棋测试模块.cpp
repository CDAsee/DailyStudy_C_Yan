#define _CRT_SECURE_NO_WARNINGS 1
#include"模块组.h"

void game()
{   
	int ret = 0;
	char board[ROW][COL];//存储数组
	Initgame(board, ROW, COL);//初始化棋盘--输入空格
	printfqipan(board, ROW, COL);//打印棋盘
	while (1)
	{
		Playermove(board, ROW, COL);//玩家移动
		printfqipan(board, ROW, COL);//打印棋盘
		judge(board,ROW,COL);//判断游戏是否结束，返回1玩家获胜，返回2电脑获胜，返回3平局，返回4游戏继续。
		ret = judge(board, ROW, COL);
		if (ret != 4)//添加一个变量接受judge函数返回值并加以判断
		{
			break;
		}
		Computermove(board, ROW, COL);//玩家移动
		printfqipan(board, ROW, COL);//打印棋盘
		judge(board, ROW, COL);//判断游戏是否结束，返回1玩家获胜，返回2电脑获胜，返回3平局，返回4游戏继续。
		ret = judge(board, ROW, COL);
		if (ret != 4)
		{
			break;
		}
	}
	if (ret == 1)
	{
		printf("玩家赢了\n");
	}
	else if (ret == 2)
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	printfqipan(board, ROW, COL);
}


int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));//srand只需要运行一次，因此放在main函数中。用time函数的返回值作为随机数生成器，强制类型转换为int
	do {
		menu();
		printf("请输入提示数:");
		scanf("%d", &i);
		if (i == 1)
		{
			printf("游戏开始!\n");
			game();
		}
		else if (i == 0)
		{
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	} while (i);

	return 0;
}