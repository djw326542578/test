

//��һ�⣺��ӡ100~200֮�������
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	for (a = 100; a <= 200; a++)
	{
		int b;
		for (b = 2; b < a; b++)
		{
			if (a%b == 0 || a == b)
				break;
		
			else
			{
					printf("%d\n", a);
					break;
			}
		}

	}
	
	system("pause");
	return 0;
}


//�ڶ��⣺����˷��ھ���
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	int k = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			k = i*j;
			printf("%4d X %d = %d", i, j, k);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

//�����⣺ �ж�1000��---2000��֮�������
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	for (a = 1000; a <= 2000; a++)
	{
		
		if (a % 4==0||a%100==0)
		printf("%d\n", a);		

	}
	
	system("pause");
	return 0;
}
