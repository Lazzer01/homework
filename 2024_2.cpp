#define _CRT_SERCURE_NO_WARNINGS 1

#include <stdio.h>

#include <string.h>
//int main()
//{
////	//printf("E:/test/test2024_2");
////	printf("%d\n",strlen("E:\test\\test.c"));
//	//printf("\a\a\a");
//	return 0;
//}


//程序输出什么？

int main()
{
	printf("%d\n", strlen("abcdef"));
	//\32被解析成一个转义字符
	printf("%d\n", strlen("c:\test\328\test.c"));
	return 0;
}

//答:6   14
