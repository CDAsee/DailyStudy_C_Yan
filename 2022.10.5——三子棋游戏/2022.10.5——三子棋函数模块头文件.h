#pragma once
#include <stdio.h>
#include<stdlib.h>//srand
#include<time.h>//time
#define ROW 3
#define COL 3

void menu();  //�˵�����
void Initgame(char board[ROW][COL],int row,int col);  //��ʼ������
void printfqipan(char board[ROW][COL], int row, int col);//��ӡ����
void Playermove(char board[ROW][COL], int row, int col);//�������
void Computermove(char board[ROW][COL], int row, int col);//��������
int judge(char board[ROW][COL], int row, int col);//�ж��Ƿ����
int judgefull(char board[ROW][COL], int row, int col);//�ж������Ƿ������Ƿ����������Ϸ