#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//告诉我们四种游戏状态 电脑赢 玩家赢 平局 继续
char Iswin(char board[ROW][COL], int row, int col);