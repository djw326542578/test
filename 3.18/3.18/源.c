//1. ������A�е����ݺ�����B�е����ݽ��н�����
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5] = { 1, 2, 3, 4 };
	int b[5] = { 5, 6, 7, 8 };
	int i, j;
	for (i = 0; i < 5; i++)
	{
		j = a[i];
		a[i] = b[i];
		b[i] = j;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d", a[i]);

	}

	system("pause");
	return 0;
}

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ��
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	float sum1 = 0;
	float sum2 = 0;
	float sum = 0;
	float d = 0;
	for (i = 1; i <= 100; i+=2)
	{
		d = 1.0 / i;
		sum1 += d;
	}
	for (i = 2; i <= 100; i += 2)
	{
		d = 1.0 / i;
		sum2 += d;
	}
	sum = sum1 - sum2;
	printf("%f\n", sum);
	system("pause");
	return 0;
}

//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9��
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j;
	j = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 || i / 10 == 9)
		{
			j++;
		}
	}
	printf("%d\n", j);
	system("pause");
	return 0;

}