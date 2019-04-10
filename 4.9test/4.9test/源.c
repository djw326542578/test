//1.5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。


#include <stdio.h>
#include <stdlib.h>
int  main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	int e = 1;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3)) == 1 &&
							((c == 1) + (d == 2)) == 1 &&
							((b == 2) + (e == 4)) == 1 &&
							((c == 5) + (d == 3)) == 1 &&
							((e == 4) + (a == 1)) == 1 &&
							(a != b) && (a != c) && (a != d) && (a != e) && (b != c) && (b != d) && (b != e) && (c != d) && (c != e) && (d != e))
							printf("a= %d,b= %d,c= %d,d= %d,e= %d", a, b, c, d, e);
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}





//2.
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//



#include <stdio.h>
#include <stdlib.h>

int main()
{
	char man[5] = { 'a','b','c','d' };
	int i;
	char killer;
	for (i = 0; i < 4; i++)
	{
		killer = man[i];
		if ((man[0] != killer) + (man[2] == killer) + (man[3] == killer) + (man[3] != killer) == 3)
		{
			printf("%c\n", killer);
		}
	}

	system("pause");
	return 0;
}



3.在屏幕上打印杨辉三角。
1
1 1
1 2 1
1 3 3 1



#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int print(int *arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int data[100];
	int i, j;
	printf("1\n");
	for (i = 1; i <= 10; i++)
	{
		data[i] = 1;
		for (j = i - 1; j > 0; j--)
		{
			data[j] += data[j - 1];
		}
		data[0] = 1;
		print(data, i + 1);
	}
	system("pause");
	return 0;

}

