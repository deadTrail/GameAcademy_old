// GameAcademyLecture_Array.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	printf("**********보물찾기***********\n");
	printf("********1.캐릭터 이동********\n");
	printf("*******2.맵 상태 보기********\n");
	printf("*********3.게임 종료*********\n");
	printf("****************************\n");
	printf("메뉴 번호를 선택하세요:");
	scanf_s("%d", &select);

	if(select==1)
	{
	while (true)
	{
	printf("1.위\t2.아래\t3.왼쪽\t4.오른쪽\n");
	scanf_s("%d", &dir);
	if (dir == 1)
	{
	if (rowHero - 1 < 0 || maze[rowHero - 1][colHero] == 1)
	{
	printf("잘못된 이동입니다. 다시 입력하세요");
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
	printf("잘못된 이동입니다. 다시 입력하세요");
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
	printf("잘못된 이동입니다. 다시 입력하세요");
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
	printf("잘못된 이동입니다. 다시 입력하세요");
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
	printf("게임 끝!!\n");
	exit(0);
	}
	}
	else
	{
	printf("축하합니다!! 보물을 찾았습니다!!\n");
	exit(0);
	}
	}*/

	int lotto[7] = { 0, };
	int input = 0;
	int checkLotto[45] = { 0, };
	int value = 0;
	while (true)
	{	
		printf("로또 번호 발생기 입니다.\n");
		printf("1.번호 생성\t2.종료하기\n");
		scanf_s("%d", &input);
		if (input == 1)
		{
			printf("잠시만 기다려 주십시오");
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
			printf("\t보너스 %4d", lotto[6]);
			printf("\n");
		}
		else if (input == 2)
		{
			printf("끝!\n");
			exit(0);
		}
		system("pause");
		system("cls");
		
	}

	return 0;
}