//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� ����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
	printf("�����뷶Χ\n");
	scanf("%d", &x);
	multiplication(x);

	system("pause");
	return 0;
}

//2.ʹ�ú���ʵ���������Ľ�����
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


//3.ʵ��һ�������ж�year�ǲ������ꡣ
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
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	system("pause");
	return 0;
}



//4. 
//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��
//

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int arr[MAX];
void init()
{
	int i;
	
	printf("����������\n");
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
	printf("******   1.��ʼ��      *******\n");
	printf("******   2.����        *******\n");
	printf("******   3.�û�        *******\n");
	printf("******   0.�˳�        *******\n");
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


//5.ʵ��һ���������ж�һ�����ǲ��������� 

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
		printf("������\n");
	}
	else
		printf("��������\n");

}
int main()
{
	int input;
	printf("������Ҫ��������");
	scanf("%d", &input);
	prime(input);
	system("pause");
	return 0;
}