//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
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






//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��


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




//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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


//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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



//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen

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



//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�

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




//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ


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
