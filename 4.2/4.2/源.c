//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定， 输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int multiplication(int n)
{
	int i, j,k;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			k = i*j;
			printf("%d *%d =%d  ", i, j, k);
		}
		printf("\n");
	}
}

int main()
{
	int x;
	printf("请输入范围\n");
	scanf("%d", &x);
	multiplication(x);

	system("pause");
	return 0;
}

//2.使用函数实现两个数的交换。
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void change(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}


int main()
{
	int x, y;
	x = 1;
	y = 2;
	change(&x, &y);
	printf("%d  %d", x, y);
	system("pause");
	return 0;
}


//3.实现一个函数判断year是不是润年。
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int is_year(int n)
{
	if ((n % 4 == 0 || n % 100 != 0) && (n % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int year = 0;
	scanf("%d", &year);
	if (is_year(year))
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
	system("pause");
	return 0;
}



//4. 
//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
//

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int arr[MAX];
void init()
{
	int i;
	
	printf("请输入数组\n");
	for (i = 0; i < MAX; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < MAX; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void empty()
{
	int i;
	for (i = 0; i < MAX; i++)
	{
		arr[i] = 0;
	}
	for (i = 0; i < MAX; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int reverse()
{
	int i,j;
	for (i = 0; i < MAX/2; i++)
	{
		j = arr[i];
		arr[i] = arr[MAX - i];
		arr[MAX - i] = j;
	}
	for (i = 0; i < MAX; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr;
	int input=0;
	
	printf("******************************\n");
	printf("******   1.初始化      *******\n");
	printf("******   2.归零        *******\n");
	printf("******   3.置换        *******\n");
	printf("******   0.退出        *******\n");
	printf("******************************\n");
	
	do
	{
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			init();
			break;
		case 2:
			empty();
			break;
		case 3:
			reverse();
			break;
		default:
			break;
		}
	} while (input != 0);
	system("pause");
	return 0;
}


//5.实现一个函数，判断一个数是不是素数。 

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int prime(int n)
{
	int j;
	int k=0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n%j == 0)
			k++;
	}
	if (k == 0)
	{
		printf("是素数\n");
	}
	else
		printf("不是素数\n");

}
int main()
{
	int input;
	printf("请输入要检测的数：");
	scanf("%d", &input);
	prime(input);
	system("pause");
	return 0;
}