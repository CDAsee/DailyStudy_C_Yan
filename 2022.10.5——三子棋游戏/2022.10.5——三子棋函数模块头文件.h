#pragma once
#include <stdio.h>
#include<stdlib.h>//srand
#include<time.h>//time
#define ROW 3
#define COL 3

void menu();  //菜单函数
void Initgame(char board[ROW][COL],int row,int col);  //初始化函数
void printfqipan(char board[ROW][COL], int row, int col);//打印棋盘
void Playermove(char board[ROW][COL], int row, int col);//玩家下棋
void Computermove(char board[ROW][COL], int row, int col);//电脑下棋
int judge(char board[ROW][COL], int row, int col);//判断是否结束
int judgefull(char board[ROW][COL], int row, int col);//判断棋盘是否满格，是否继续进行游戏