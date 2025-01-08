#define _CRT_SERCURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int input = 0;
//	
//	printf("为了好工作：\n");
//	printf("要努力学技能吗(1/0)?");
//	scanf_s("%d", &input);
//
//	if (input == 1)
//		printf("开启新阶段\n");
//	else
//	
//		printf("一切照旧\n");
//	
//	return 0;
//}


//int main()
//{
//	int line = 0;
//
//	while (line < 600)
//	{
//		printf("学习天数:%d\n", line);
//
//		line++;
//	}
//	if (line == 600)
//		printf("好运\n");
//
//	return 0;
//
//}



//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf_s("%d %d", &num1, &num2);
//
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf_s("%d %d", &num1, &num2);
//
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	//while (a < 10)
//	//	a++;
//
//	int t = -7;
//
//	scanf_s("%d", &a);
//
//	int sum = Add(a, t);
//	if (sum >= 0)
//		printf("reset\n", sum);
//	else
//		printf("running\n", sum);
//
//
//	return 0;
//}



int main()
{

	int a = 10;
	int b = a++;//先使用给b，再计算a的值
	//int b = ++a;//先计算a的值，再使用给b
	printf("%d\n", b);
	printf("%d\n", a);

	return 0;
}



