#define _CRT_SECURE_NO_WARNINGS 1
#include"ģ����.h"

void game()
{   
	int ret = 0;
	char board[ROW][COL];//�洢����
	Initgame(board, ROW, COL);//��ʼ������--����ո�
	printfqipan(board, ROW, COL);//��ӡ����
	while (1)
	{
		Playermove(board, ROW, COL);//����ƶ�
		printfqipan(board, ROW, COL);//��ӡ����
		judge(board,ROW,COL);//�ж���Ϸ�Ƿ����������1��һ�ʤ������2���Ի�ʤ������3ƽ�֣�����4��Ϸ������
		ret = judge(board, ROW, COL);
		if (ret != 4)//���һ����������judge��������ֵ�������ж�
		{
			break;
		}
		Computermove(board, ROW, COL);//����ƶ�
		printfqipan(board, ROW, COL);//��ӡ����
		judge(board, ROW, COL);//�ж���Ϸ�Ƿ����������1��һ�ʤ������2���Ի�ʤ������3ƽ�֣�����4��Ϸ������
		ret = judge(board, ROW, COL);
		if (ret != 4)
		{
			break;
		}
	}
	if (ret == 1)
	{
		printf("���Ӯ��\n");
	}
	else if (ret == 2)
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	printfqipan(board, ROW, COL);
}


int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));//srandֻ��Ҫ����һ�Σ���˷���main�����С���time�����ķ���ֵ��Ϊ�������������ǿ������ת��Ϊint
	do {
		menu();
		printf("��������ʾ��:");
		scanf("%d", &i);
		if (i == 1)
		{
			printf("��Ϸ��ʼ!\n");
			game();
		}
		else if (i == 0)
		{
			break;
		}
		else
		{
			printf("�����������������\n");
		}
	} while (i);

	return 0;
}