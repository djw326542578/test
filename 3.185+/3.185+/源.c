//1.����Ļ���������ͼ���� 
//*
//***
//*****
//*******
//*********
//***********
//*************
//***********
//*********
//*******
//*****
//***
//*

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, k;
	for (i = 1; i <= 13; i += 2)
	{
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	for (k = 11; k>0; k -= 2)
	{
		for (j = 1; j <= k; j++)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;

}

//2.���0��999֮������С�ˮ�ɻ������������ 
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, a, b, c;
	for (i = 1; i <= 999; i++)
	{
		a = i % 10;
		b = i / 10 % 10;
		c = i / 100;
		if (i == a*a*a + b*b*b + c*c*c)
			printf("%d\n", i);
	}
	system("pause");
	return 0;
}

//3.��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, a;
	int Sn=0 ;
	scanf("%d", &a);
	Sn = a;
	for (i = 1; i <= 5; i++)
	{
		a = a * 10;
		Sn += a;
		a = Sn;
	}
	printf("%d\n", Sn);
	system("pause");
	return 0;
}