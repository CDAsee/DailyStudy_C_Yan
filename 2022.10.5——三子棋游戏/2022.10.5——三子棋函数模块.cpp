#define _CRT_SECURE_NO_WARNINGS 1

#include"模块组.h"

void menu()
{
	printf("####################\n");
	printf("####  1.begain  ####\n");
	printf("####  0.exit    ####\n");
	printf("####################\n");
}

void Initgame(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void printfqipan(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j<(col-1))
			printf("|");
		}
		printf("\n");
		if(i<row-1)    //最后一行不需要打印---，总共需要两行---输出棋盘
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < (col - 1))
				{
					printf("|");
				}
			}
		printf("\n");
		}
	}

}

void Playermove(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;

	while (1)
	{
		printf("玩家:\n");
		printf("请输入行列数：\n");
		scanf("%d %d", &i, &j);
		if (i <= row && i > 0 && j <= col && j > 0)
		{
			if (board[i-1][j-1] == ' ')//i-1,j-1因为计算机从0开始，日常生活从1开始
			{
				board[i-1][j-1]='*';
				break;
			}
			else
			{
				printf("坐标被占用请重新输入\n");
			}
		}
		else
		{
			printf("输入错误请重新输入\n");
		}
     }
}

void Computermove(char board[ROW][COL], int row,int col)
{
	printf("电脑:\n");
	while (1)
	{
		
		int i = rand() % row;//模上行数，行数为3，因此值可能取值为0，1，2符合三子棋输入。
		int j = rand() % col;//放在循环中，若输入不符合则可以循环生成不同变量。
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
		/*else
		{
			continue;
		}*/
	}

}


int judgefull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 1;//返回1游戏继续
			}
		}
	}
	return 2;//返回2代表平局
}
int judge(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < row; i++)//判断行相等
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			if (board[i][0] == '*')
				return 1;
			else
				return 2;
		}
	}
	for (i = 0; i <col; i++)//判断列相等
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			if (board[i][0] == '*')
				return 1;
			else
				return 2;
		}
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[1][1] != ' ')//判断主对角线
	{
		if (board[1][1] == '*')
			return 1;
		else
			return 2;
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[1][1] != ' ')//判断副对角线
	{
		if (board[1][1] == '*')
			return 1;
		else
			return 2;
	}
	judgefull(board, ROW, COL);
	int p = 0;
	p = judgefull(board, ROW, COL);
	if (p==1)
	{
		return 4;
	}
	
		return 3;

}