#define _CRT_SERCURE_NO_WARNINGS 1

//main函数-主函数：程序执行的起始段
// 一个工程可以有多个.c文件，一个.c文件只能有一个main函数
//printf-库函数：调用的头函数的内容，进行引用需要加上#代码
//int：返回类型为整型（整数）


//#include<stdio.h>

//int main()
//{
//
//	printf("C语言学习");
//	
//	return 0;
//}

//按快捷键ctrl+f5执行，或ctrl+fn+f5，或菜单栏点击调试-开始执行（不调试）

#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d",&a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);

	return 0;
}


