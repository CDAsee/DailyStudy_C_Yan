#define _CRT_SECURE_NO_WARNINGS 1

#include"ģ����.h"

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
		if(i<row-1)    //���һ�в���Ҫ��ӡ---���ܹ���Ҫ����---�������
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
		printf("���:\n");
		printf("��������������\n");
		scanf("%d %d", &i, &j);
		if (i <= row && i > 0 && j <= col && j > 0)
		{
			if (board[i-1][j-1] == ' ')//i-1,j-1��Ϊ�������0��ʼ���ճ������1��ʼ
			{
				board[i-1][j-1]='*';
				break;
			}
			else
			{
				printf("���걻ռ������������\n");
			}
		}
		else
		{
			printf("�����������������\n");
		}
     }
}

void Computermove(char board[ROW][COL], int row,int col)
{
	printf("����:\n");
	while (1)
	{
		
		int i = rand() % row;//ģ������������Ϊ3�����ֵ����ȡֵΪ0��1��2�������������롣
		int j = rand() % col;//����ѭ���У������벻���������ѭ�����ɲ�ͬ������
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
				return 1;//����1��Ϸ����
			}
		}
	}
	return 2;//����2����ƽ��
}
int judge(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0;i < row; i++)//�ж������
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			if (board[i][0] == '*')
				return 1;
			else
				return 2;
		}
	}
	for (i = 0; i <col; i++)//�ж������
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			if (board[i][0] == '*')
				return 1;
			else
				return 2;
		}
	}
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[1][1] != ' ')//�ж����Խ���
	{
		if (board[1][1] == '*')
			return 1;
		else
			return 2;
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[1][1] != ' ')//�жϸ��Խ���
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