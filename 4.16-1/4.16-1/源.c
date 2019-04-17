//1
//#include<stdio.h>
//#include<stdlib.h>
//
//int count(int n)
//{
//	int i, num = 0;
//	for (i = n; i; i /= 2)
//	{
//		num+=i%2;
//	}
//	return num;
//}
//
//int main()
//{
//	printf("%d\n", count(10));
//
//	system("pause");
//	return 0;
//}


//2
//#include<stdlib.h>
//#include<stdio.h>
//
//
//int main()
//{
//	int n = 10086;
//	int i;
//	char num[34] = { 0 };
//	for (i = 31; i >=0;i--, n /= 2)
//	{
//		num[i] = n % 2 + '0';
//	}
//
//	for (i = 0; num[i]; i+=2)
//	{
//		putchar(num[i]);
//	}
//	putchar('\n');
//
//	for (i = 1; num[i]; i +=2)
//	{
//		putchar(num[i]);
//	}
//	putchar('\n');
//	system("pause");
//	return 0;
//}

//4
//#include<stdio.h>
//#include<stdlib.h>
//
//
//int count(int n)
//{
//	int i, num = 0;
//	for (i = n; i; i /= 2)
//	{
//		num+=i%2;
//	}
//	return num;
//}
//
//int main()
//{
//	printf("%d\n", count(1999^2999));
//
//	system("pause");
//	return 0;
//}


