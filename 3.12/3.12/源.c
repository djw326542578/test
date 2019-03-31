//1. 给定两个整形变量的值，将两个值的内容进行交换。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("a=%d,b=%d", a, b);
	system("pause");
	return 0;
}

//2. 不允许创建临时变量，交换两个数的内容
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	a = 5;
	b = 7;
	a = a + b;
	b = a - b;
	a = a - b;

	printf("%d %d", a, b);
	system("pause");
	return 0;
}

//3.求10 个整数中最大值。 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int MAX = 0;            
	int arr[10] = { 0 };    
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &arr[i]); 
	}
	MAX = arr[1];
	for (i = 1; i <= 9; i++)
	{
		if (arr[i] > MAX)
		{
			MAX = arr[i];
		}
	}
	printf("最大的数为：%d", MAX);
	system("pause");
	return 0;
}

//4.将三个数按从大到小输出。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	int arr[3] = { 0 };
	for (i = 0; i <= 2; i++)
		{
		scanf("%d", &arr[i]); 
		}
	for (i = 0; i <= 2; i++)
	{
		for (j = i + 1; j <= 2; j++)
		{
			if (arr[i] > arr[j])
			{
				k = arr[i];
				arr[i] = arr[j];
				arr[j] = k;
			}
		}
	}
	for (i = 0; i <= 2; i++)
	{
		printf("%4d", arr[i]);
	}
	system("pause");
	return 0;
}

//5.求两个数的最大公约数。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int d = 0;
	int a, b, c;
		a = 15;
		b = 25;
		for (c = 1; c <= a; c++)
		{
			if (a%c == 0 && b%c == 0)
				d = c;
		}

		printf("%d\n", d);
		system("pause");
	return 0;
}