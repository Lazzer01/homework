#define _CRT_SERCURE_NO_WARNINGS 1

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int num1 = 100;
//	u_int num2 = 100;
//typedef后，此时undigned int和u_int完全一致
//	return 0;
//}

//#include <stdio.h>
//void test()
//{
//	int a = 1;										//每次i循环进一个数，都会被定义为局部变量a，而局部变量a=1，执行++后变为2，再打印
//	a++;											//
//	printf("%d ", a);								//i循环了10次，故一共打印10个2
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	static int a = 1;								//由“static静态的”修饰的局部变量在出局部范围后并未销毁，而是保持上一次结束时的状态
//	a++;											//第一次a=1,a++后变为2，等待下一个i循环进一个数，从a=2开始运算
//	printf("%d ", a);								//第一次打印时a=1,a++,故打印的第一个字符是2，往后循环随着a++依次+1，打印结果为2~11
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//#include <stdio.h>
//extern int b;
//int main()
//{
//
//	int a = 5;
//	printf("%d ", a + b);							//当全局变量被static修饰后，其外部连接属性被修改成内部连接属性，此时static修饰的全局变量只能在自身所在的源文件中使用
//
//	return 0;
//}

//#include <stdio.h>
//extern int Add(int r, int t);
//int main()
//{
//	int a = 92;
//	int b = 26;
//	int sum = Add(a, b);							//当函数被static修饰后，连接属性被修改，原理同static修饰全局变量,此时代码无法运行
//	printf("sum= %d\n", sum);
//
//	return 0;
//}

