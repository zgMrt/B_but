#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("****************************\n");
	printf("*** 1.paly   0.exit  *******\n");
	printf("****************************\n");
}
void game()
{
	//�׵���Ϣ�洢
	//1.�����׵���Ϣ 
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}
void sao()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
}
int main()
{
	sao();
	return 0;
}