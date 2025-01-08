#define _CRT_SERCURE_NO_WARNINGS 1


//static int b = 3;

//static int Add(int r, int t)
//{
//	int sum = r + t;
//	return sum;
//}

//define定义宏
#include <stdio.h>
#define ADD(a, b) ((a) + (b))						//define定义宏的时候，两个元素各自要用()包括起来，因为可能会是两个函数，再用()全部包括起来，此时才能成为一个整体进行运算.
int main()											//如果没有用()将元素包括起来，就会运算成为10*32+45
{
	
	printf("%d\n",10* ADD(32, 45));
	
	return 0;
}




