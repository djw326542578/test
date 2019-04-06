//#define  _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
#include"head.h"

void menu()
{
	printf("**********************************\n");
	printf("********   1.开始游戏    *********\n");
	printf("********   2.退出        *********\n");
	printf("**********************************\n");
}

int game()
{
	char win = 0;
	zero();
	chess_board();
	do
	{
		PlayerMove();
		chess_board();
		win = CheckWinner();
		if (win != '0')
			break;
		ComputerMove();
		chess_board();
		win = CheckWinner();
	} while (win == '0');
	
	if(win == '*')
		{
			printf("玩家获胜！\n");
		}
	else if (win == '#')
		{
			printf("电脑获胜！\n");
		}
	else if (win == 'a')
		{
			printf("和棋！\n");
		}
	system("pause");
	return 0;
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			break;
		default:
			printf("选择错误请重新选择\n");
			break;
		}
	} while (input!=2);

	return 0;
}

