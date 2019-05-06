//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int a[5] = { 0, 1, 2, 3, 4 };
//	int b[5] = { 0 };
//	int c[5] = { 0 };
//	int i,j=0,k=0;
//	for (i = 0; i < 10; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			b[j++] = a[i];
//		}
//		else
//		{
//			c[k++] = a[i];
//		}
//	}
//
//	for (i = 0; i < j; i++)
//	{
//		a[i] = b[i];
//	}
//
//	for (i = 0; i < k; i++)
//	{
//		a[j + i] = c[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%3d", a[i]);
//	}
//	system("pause");
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>



int main()
{
	int a[3][3] = { 1, 3, 5, 3, 5, 7, 5, 7, 9 };

	system("pause");
	return 0;
}