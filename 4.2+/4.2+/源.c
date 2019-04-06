//1.递归和非递归分别实现求第n个斐波那契数。
//
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
	int a, b = 1, c = 1,i;
	for (i = 2; i < n; i++)
	{
		a = b + c;
		b = c;
		c = a;
	}
	return a;
}

int fib1(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return fib1(n - 1) + fib1(n - 2);
}

int main()
{
	int a=10;
	printf("%d\n", fib(a));
	printf("%d\n", fib1(a));
	system("pause");
	return 0;
}






//2.编写一个函数实现n^k，使用递归实现


#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int mutply(int k, int n)
{
	if (n == 1)
		return k;
	return k*mutply(k, n - 1);
}

int main()
{
	int a = 10;
	int b = 2;
	printf("%d\n", mutply(a,b));
	system("pause");
	return 0;
}




//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n)
{
	if (n ==0)
		return 0;
	return n % 10 + DigitSum(n / 10);
}

int main()
{
	
	printf("%d\n", DigitSum(10086));
	system("pause");
	return 0;
}


//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//


#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int reverse_string(char * string)
{

}

int main()
{
	reverse_string( )

	return 0;
}



//5.递归和非递归分别实现strlen

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int strlen1(char *str)
{
	if (*str == '\0')
		return 0;
	return 1 + strlen1(str + 1);
}

int main()
{
	printf("%d\n", strlen1("asd"));
	system("pause");
	return 0;
}



//6.递归和非递归分别实现求n的阶乘

#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int mutply( int n)
{
	if (n == 1)
		return n ;
	return n*mutply(n - 1);
}

int mutply1(int n)
{
	int i;
	int j = 1;
	for (i = 1; i <= n; i++)
		j *= i;
	return j;
}


int main()
{
	int a = 3;
	printf("%d\n", mutply(a));
	printf("%d\n", mutply1(a));
	system("pause");
	return 0;
}




//7.递归方式实现打印一个整数的每一位


#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




int Sum(int n)
{
	if (n ==0)
		return 0;
	Sum(n / 10);
  printf("%2d",n%10);
}

int main()
{
	
	Sum(10086);
	system("pause");
	return 0;
}
