//1.5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�


#include <stdio.h>
#include <stdlib.h>
int  main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int d = 1;
	int e = 1;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d <= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if (((b == 2) + (a == 3)) == 1 &&
							((c == 1) + (d == 2)) == 1 &&
							((b == 2) + (e == 4)) == 1 &&
							((c == 5) + (d == 3)) == 1 &&
							((e == 4) + (a == 1)) == 1 &&
							(a != b) && (a != c) && (a != d) && (a != e) && (b != c) && (b != d) && (b != e) && (c != d) && (c != e) && (d != e))
							printf("a= %d,b= %d,c= %d,d= %d,e= %d", a, b, c, d, e);
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}





//2.
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//



#include <stdio.h>
#include <stdlib.h>

int main()
{
	char man[5] = { 'a','b','c','d' };
	int i;
	char killer;
	for (i = 0; i < 4; i++)
	{
		killer = man[i];
		if ((man[0] != killer) + (man[2] == killer) + (man[3] == killer) + (man[3] != killer) == 3)
		{
			printf("%c\n", killer);
		}
	}

	system("pause");
	return 0;
}



3.����Ļ�ϴ�ӡ������ǡ�
1
1 1
1 2 1
1 3 3 1



#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int print(int *arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf(" %d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int data[100];
	int i, j;
	printf("1\n");
	for (i = 1; i <= 10; i++)
	{
		data[i] = 1;
		for (j = i - 1; j > 0; j--)
		{
			data[j] += data[j - 1];
		}
		data[0] = 1;
		print(data, i + 1);
	}
	system("pause");
	return 0;

}

