// GameAcademyLecture_Array.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	/*int maze[10][10] = {
	{ 0,1,1,1,1,1,1,1,1,1 },
	{ 0,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,0,0,1 },
	{ 1,0,0,0,0,0,1,1,0,1 },
	{ 1,0,0,0,2,0,1,1,0,1 },
	{ 1,1,1,1,1,0,1,1,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 },
	};

	int select = 0;
	int dir = 0;
	int rowHero = 0;
	int colHero = 0;

	while (true)
	{
	if (maze[rowHero][colHero]!=2)
	{
	printf("****************************\n");
	printf("**********����ã��***********\n");
	printf("********1.ĳ���� �̵�********\n");
	printf("*******2.�� ���� ����********\n");
	printf("*********3.���� ����*********\n");
	printf("****************************\n");
	printf("�޴� ��ȣ�� �����ϼ���:");
	scanf_s("%d", &select);

	if(select==1)
	{
	while (true)
	{
	printf("1.��\t2.�Ʒ�\t3.����\t4.������\n");
	scanf_s("%d", &dir);
	if (dir == 1)
	{
	if (rowHero - 1 < 0 || maze[rowHero - 1][colHero] == 1)
	{
	printf("�߸��� �̵��Դϴ�. �ٽ� �Է��ϼ���");
	}
	else
	{
	rowHero--;
	break;
	}
	}
	else if (dir == 2)
	{
	if (rowHero + 1 > 10 || maze[rowHero + 1][colHero] == 1)
	{
	printf("�߸��� �̵��Դϴ�. �ٽ� �Է��ϼ���");
	}
	else
	{
	rowHero++;
	break;
	}
	}
	else if(dir==3)
	{
	if (colHero - 1 < 0 || maze[rowHero][colHero-1] == 1)
	{
	printf("�߸��� �̵��Դϴ�. �ٽ� �Է��ϼ���");
	}
	else
	{
	colHero--;
	break;
	}
	}
	else if (dir == 4)
	{
	if (colHero + 1 > 10 || maze[rowHero][colHero + 1] == 1)
	{
	printf("�߸��� �̵��Դϴ�. �ٽ� �Է��ϼ���");
	}
	else
	{
	colHero++;
	break;
	}
	}
	}
	}
	else if (select == 2)
	{
	for (int i = 0; i < 10; i++)
	{
	for (int j = 0; j < 10; j++)
	{
	if (maze[i][j] == 0)
	{
	if (i == rowHero && j == colHero)
	{
	printf("@");
	}
	else
	{
	printf("\u25a1");
	}
	}
	else if (maze[i][j] == 1)
	{
	printf("\u25a0");
	}
	else if (maze[i][j] == 2)
	{
	printf("\u25c6");
	}
	}
	printf("\n");
	}
	}
	else if (select == 3) {
	printf("���� ��!!\n");
	exit(0);
	}
	}
	else
	{
	printf("�����մϴ�!! ������ ã�ҽ��ϴ�!!\n");
	exit(0);
	}
	}*/

	int lotto[7] = { 0, };
	int input = 0;
	int checkLotto[45] = { 0, };
	int value = 0;
	while (true)
	{	
		printf("�ζ� ��ȣ �߻��� �Դϴ�.\n");
		printf("1.��ȣ ����\t2.�����ϱ�\n");
		scanf_s("%d", &input);
		if (input == 1)
		{
			printf("��ø� ��ٷ� �ֽʽÿ�");
			for (int i = 0; i < 7; i++)
			{
				do
				{
					srand((int)time(NULL));
					value = rand() % 45;
				} while (checkLotto[value]);
				checkLotto[value] = 1;
				lotto[i] = value + 1;
				printf(".");
			}
			printf("\n");
			for (int i = 0; i < 6; i++)
			{
				printf("%4d", lotto[i]);
			}
			printf("\t���ʽ� %4d", lotto[6]);
			printf("\n");
		}
		else if (input == 2)
		{
			printf("��!\n");
			exit(0);
		}
		system("pause");
		system("cls");
		
	}

	return 0;
}