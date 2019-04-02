#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

char board[ROW][COL];

void zero();
void chess_board();
void PlayerMove();
void ComputerMove();
int IsFull();