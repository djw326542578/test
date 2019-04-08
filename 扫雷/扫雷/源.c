#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Menu()
{
	int choice = 0;
	printf("************************\n");
	printf("*******1.��ʼ��Ϸ*******\n");
	printf("*******2.�˳���Ϸ*******\n");
	printf("************************\n");
	printf("����������ѡ��\n");
	scanf("%d", &choice);
	return choice;
}

#define MINE_COUNT 10
#define ROW 9
#define COL 9

//ʹ�ö�ά��������ʾɨ�׵ĵ�ͼ����Ҫ��������ά����
//��һ����ά�����ʾ��������
//�ڶ�����ά�����ʾ�û������ĵ�ͼ
//ɨ�׵�ͼΪ9*9������ά���鶨��Ϊ11*11
//��ͼ��Ч��Χ[1,ROW][1,COL]

//��mine_map,ʹ�á�0�����ַ��㣬��ʾ���ǵ��ף�
//ʹ�á�1�����ַ�һ����ʾ�ǵ��ס�
char mine_map[ROW + 2][COL + 2];
//��show_map��ʹ�á�*������ʾδ�򿪵ķ��飬
//���ڴ򿪵ķ��飬ʹ�þ������������ʾ��
char show_map[ROW + 2][COL + 2];

void Init(char mine_map[ROW + 2][COL + 2],
	char show_map[ROW + 2][COL + 2])
{
	//1.��ʼ������
	//��main_map���Ԫ������Ϊ��0��
	//��show_map���Ԫ������Ϊ��*��
	memset(mine_map, '0', (ROW + 2)*(COL + 2));
	memset(show_map, '*', (ROW + 2)*(COL + 2));
	//ʹ�ú���memset�����԰�һ�������Ĵ洢�ռ�����Ϊĳһ���ض���ֵ��
	//����Ҫ�ö���ѭ���ˡ������������ĵ�λΪ�ֽڣ���ͷ�ļ�Ϊ<string.h>
	//2.�����������
	srand(time(0));
	//������������ѭ���ڣ�����һ�ξͿ����ˣ���Ȼÿ�ε�������Ӷ�һ����
	int mine_count = MINE_COUNT;
	while (mine_count > 0)
	{
		//�����ѭ�����漴���õ��ף�ÿ����һ����mine_count--��
		//[1,ROW]
		int row = rand() % 9 + 1;
		int col = rand() % 9 + 1;
		if (mine_map[row][col] == '0')
		{
			mine_map[row][col] = '1';
			--mine_count;
		}
	}
}

void DisplayMap(char map[ROW + 2][COL + 2])
{
	printf("    ");
	//��ӡ��һ�е����ݣ��ĸ��ո���е����ꡣ
	for (int col = 1; col <= COL; ++col)
	{
		printf("%d ", col);
	}
	printf("\n");
	//��ӡ����ĵ�ͼ
	for (int col = 1; col <= COL; ++col)
	{
		printf("---");
	}
	printf("\n");
	//���д�ӡ��ͼ�еľ�������
	for (int row = 1; row <= ROW; ++row)
	{
		//�ȴ�ӡ�к�
		printf("%02d| ", row);
		//�ٴ�ӡһ�е�����
		for (int col = 1; col <= COL; ++col)
		{
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}
}

void UpdateShowMap(char map[ROW + 2][COL + 2],
	char mine_map[ROW + 2][COL + 2], int row, int col)
{
	int mine_count = 0;
	//�����������ASC2��ֵ���ַ�����ַ�����������㣬
	//�ַ�һ���ַ����������һ��
	mine_count = (mine_map[row - 1][col - 1] - '0')
		+ (mine_map[row - 1][col] - '0')
		+ (mine_map[row - 1][col + 1] - '0')
		+ (mine_map[row][col - 1] - '0')
		+ (mine_map[row][col + 1] - '0')
		+ (mine_map[row + 1][col + 1] - '0')
		+ (mine_map[row + 1][col] - '0')
		+ (mine_map[row + 1][col - 1] - '0');
	show_map[row][col] = '0' + mine_count;
	//show_map�б�������ַ������ַ����mine-count���õ����ַ�
}

void Game()
{
	//1.��ʼ��������ͼ����������
	Init(mine_map, show_map);
	//2.��ӡ��show_map��
	DisplayMap(show_map);
	while (1)
	{
		//3.�����û���������[1,ROW][1,COL]��
		int not_mine_count = 0;
		int row = 0;
		int col = 0;
		printf("������Ҫ�����ķ������꣨ROW,COL��:\n");
		scanf("%d%d", &row, &col);
		//4.���û�������Ϸ��Խ����ж���������Ϸ��������û���������
		if (row <= 0 || row > ROW || col <= 0 || col > COL)
		{
			printf("�������벻�Ϸ�������������\n");
			continue;
		}
		//5.�ж�����Ƿ���ף�������ף���Ϸ��������ӡ����
		if (mine_map[row][col] == '1')
		{
			printf("��Ϸ����!\n");
			DisplayMap(mine_map);
			break;
		}
		//6.���û�в��ף��ж�һ������Ƿ�ʤ����
		//ʤ���������Ѿ������ķ�������=��ͼ��������-���׸���
		++not_mine_count;
		if (not_mine_count == ROW*COL - MINE_COUNT)
		{
			printf("ɨ�׳ɹ���\n");
			DisplayMap(mine_map);
			break;
		}
		//7.�����Ϸû��ʤ����ͳ����Χ�׵ĸ�������ӡshow_map,�ص�3.
		UpdateShowMap(show_map, mine_map, row, col);
		DisplayMap(show_map);
	}
}

void Start()
{
	while (1)
	{
		int choice = Menu();
		if (choice == 2)
		{
			printf("�˳���Ϸ��\n");
			break;
		}
		else if (choice == 1)
		{
			printf("��Ϸ��ʼ��\n");
			Game();
			break;
		}
		else
		{
			printf("�����������������룡\n");
			continue;
		}
	}
}

int main()
{
	Start();
	system("pause");
	return 0;
}





