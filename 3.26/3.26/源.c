//1.猜大小游戏
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
//			printf("请输入数字：");
//				scanf("%d", &input);
//			if (input > random)
//			{
//				printf("大了\n");
//			}
//			else if (input < random)
//			{
//				printf("小了\n");
//			}
//			else
//			{
//				printf("对了\n");
//				break;
//			}
//		}
//		system("pause");
//		return 0;
//
//}

//2.写代码可以在整型有序数组中查找想要的数字， 
//找到了返回下标，找不到返回 - 1.（折半查找）

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
//		printf("找到了,%d\n", mid);
//	else
//		printf("没找到\n");
//	
//	
//	system("pause");
//	return 0;
//
//}


//3.编写代码模拟三次密码输入的场景。
//最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，
//可以重新输入，最多输入三次。三次均错，则提示退出程序。


