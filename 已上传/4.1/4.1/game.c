#include"head.h"
char board[ROW][COL];

void zero(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void chess_board(char board[ROW][COL],int row,int col)
{
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("|%c ", board[i][j]);
		}
		printf("\n");

		for (j = 0; j < COL; j++)
		{
			if (i != ROW - 1)
				printf("---");
		}
		printf("\n");
	}
}


void PlayerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
	
		printf("请玩家落子（输入坐标）\n");
	
		int row = 0;
		int col = 0;
		scanf("%d%d", &row, &col);
		if (row < 0 || row > ROW || col < 0 || col > COL)
		{
			printf("输入的坐标非法，请重新输入\n");
			continue;
		}
		if (board[row-1][col-1] != ' ')
		{
			printf("当前位置已经有子了，请重新输入\n");
			continue;
		}
		
		board[row-1][col-1] = '*';
		break;
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("请电脑落子\n");

	while (1)
	{
		row = rand() % ROW;
		col = rand() % COL;
		if (board[row][col] == ' ')
		{
			board[row][col] = '#';
			break;
		}
	}
}

int IsFull()
{
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
		{
			if (board[row][col] != ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


char CheckWinner(char board[ROW][COL], int row, int col)
{
	
	//检测所有的行是不是三子连在一起
	for (int row = 0; row < ROW; row++)
	{
		if (board[row][0] == board[row][1] &&board[row][0] ==board[row][2] &&board[row][0] != ' ')
		{
			return board[row][0];
		}
	}
	//再检测所有的列是不是连在一起
	for (int col = 0; col < COL; col++)
	{
		if (board[0][col] == board[1][col] &&board[0][col] == board[2][col] &&board[0][col] != ' ')
		{
			return board[0][col];
		}
	}
	//检测对角线
	if (board[0][0] == board[1][1] &&board[0][0] == board[2][2] &&board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] &&board[2][0] == board[0][2] &&board[2][0] != ' ')
	{
		return board[2][0];
	}
	//检测是否和棋
	if (IsFull())
	{
		return'a';
	}
	return '0';
}