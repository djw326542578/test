//1.�´�С��Ϸ
//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//int main()
//{
//	int input = 0;
//	int random = rand() % 100 + 1;
//	srand((unsigned)time(NULL));
//	
//		while (1)
//		{
//			printf("���������֣�");
//				scanf("%d", &input);
//			if (input > random)
//			{
//				printf("����\n");
//			}
//			else if (input < random)
//			{
//				printf("С��\n");
//			}
//			else
//			{
//				printf("����\n");
//				break;
//			}
//		}
//		system("pause");
//		return 0;
//
//}

//2.д����������������������в�����Ҫ�����֣� 
//�ҵ��˷����±꣬�Ҳ������� - 1.���۰���ң�

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 6;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = mid + (right - left) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("�ҵ���,%d\n", mid);
//	else
//		printf("û�ҵ�\n");
//	
//	
//	system("pause");
//	return 0;
//
//}


//3.��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����


