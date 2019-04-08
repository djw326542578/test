#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Menu()
{
	int choice = 0;
	printf("************************\n");
	printf("*******1.开始游戏*******\n");
	printf("*******2.退出游戏*******\n");
	printf("************************\n");
	printf("请输入您的选择：\n");
	scanf("%d", &choice);
	return choice;
}

#define MINE_COUNT 10
#define ROW 9
#define COL 9

//使用二维数组来表示扫雷的地图，需要有两个二维数组
//第一个二维数组表示地雷雷阵
//第二个二维数组表示用户看到的地图
//扫雷地图为9*9，但二维数组定义为11*11
//地图有效范围[1,ROW][1,COL]

//对mine_map,使用‘0’，字符零，表示不是地雷，
//使用‘1’，字符一，表示是地雷。
char mine_map[ROW + 2][COL + 2];
//对show_map，使用‘*’，表示未打开的方块，
//对于打开的方块，使用具体的数字来表示。
char show_map[ROW + 2][COL + 2];

void Init(char mine_map[ROW + 2][COL + 2],
	char show_map[ROW + 2][COL + 2])
{
	//1.初始化数组
	//把main_map里的元素设置为“0”
	//把show_map里的元素设置为“*”
	memset(mine_map, '0', (ROW + 2)*(COL + 2));
	memset(show_map, '*', (ROW + 2)*(COL + 2));
	//使用函数memset，可以把一段连续的存储空间设置为某一个特定的值，
	//不需要用二重循环了。第三个参数的单位为字节！！头文件为<string.h>
	//2.随机布置雷阵
	srand(time(0));
	//不可以设置在循环内，设置一次就可以了，不然每次的随机种子都一样。
	int mine_count = MINE_COUNT;
	while (mine_count > 0)
	{
		//在这个循环中随即设置地雷，每设置一个，mine_count--。
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
	//打印第一行的内容，四个空格加列的坐标。
	for (int col = 1; col <= COL; ++col)
	{
		printf("%d ", col);
	}
	printf("\n");
	//打印具体的地图
	for (int col = 1; col <= COL; ++col)
	{
		printf("---");
	}
	printf("\n");
	//按行打印地图中的具体内容
	for (int row = 1; row <= ROW; ++row)
	{
		//先打印行号
		printf("%02d| ", row);
		//再打印一行的内容
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
	//巧妙地利用了ASC2码值，字符零减字符零等于数字零，
	//字符一减字符零等于数字一。
	mine_count = (mine_map[row - 1][col - 1] - '0')
		+ (mine_map[row - 1][col] - '0')
		+ (mine_map[row - 1][col + 1] - '0')
		+ (mine_map[row][col - 1] - '0')
		+ (mine_map[row][col + 1] - '0')
		+ (mine_map[row + 1][col + 1] - '0')
		+ (mine_map[row + 1][col] - '0')
		+ (mine_map[row + 1][col - 1] - '0');
	show_map[row][col] = '0' + mine_count;
	//show_map中保存的是字符，用字符零加mine-count，得到了字符
}

void Game()
{
	//1.初始化两个地图，布置雷阵。
	Init(mine_map, show_map);
	//2.打印出show_map。
	DisplayMap(show_map);
	while (1)
	{
		//3.提醒用户输入坐标[1,ROW][1,COL]。
		int not_mine_count = 0;
		int row = 0;
		int col = 0;
		printf("请输入要翻开的方块坐标（ROW,COL）:\n");
		scanf("%d%d", &row, &col);
		//4.对用户的输入合法性进行判定。如果不合法，提醒用户重新输入
		if (row <= 0 || row > ROW || col <= 0 || col > COL)
		{
			printf("您的输入不合法！请重新输入\n");
			continue;
		}
		//5.判定玩家是否踩雷，如果踩雷，游戏结束，打印雷阵。
		if (mine_map[row][col] == '1')
		{
			printf("游戏结束!\n");
			DisplayMap(mine_map);
			break;
		}
		//6.如果没有踩雷，判断一下玩家是否胜利。
		//胜利条件：已经翻开的方块数量=地图方块总数-地雷个数
		++not_mine_count;
		if (not_mine_count == ROW*COL - MINE_COUNT)
		{
			printf("扫雷成功！\n");
			DisplayMap(mine_map);
			break;
		}
		//7.如果游戏没有胜利，统计周围雷的个数。打印show_map,回到3.
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
			printf("退出游戏！\n");
			break;
		}
		else if (choice == 1)
		{
			printf("游戏开始！\n");
			Game();
			break;
		}
		else
		{
			printf("输入有误，请重新输入！\n");
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





