//#define  _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
#include"head.h"

void menu()
{
	printf("**********************************\n");
	printf("********   1.��ʼ��Ϸ    *********\n");
	printf("********   2.�˳�        *********\n");
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
			printf("��һ�ʤ��\n");
		}
	else if (win == '#')
		{
			printf("���Ի�ʤ��\n");
		}
	else if (win == 'a')
		{
			printf("���壡\n");
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input!=2);

	return 0;
}

