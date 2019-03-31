//1.在屏幕上输出以下图案： 
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

//2.求出0～999之间的所有“水仙花数”并输出。 
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

//3.求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
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