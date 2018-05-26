//每个程序有且只有一个main函数，程序的执行总是从main函数开始
//C语言中的函数就是面向对象中的方法
//Java中，每个方法的定义没有顺序限制，在前面定义的方法可以调用后面定义的方法

#include <stdio.h>
//#include "test.h"
#include "test.c"
//将test函数放到main函数前面做一个提前声明，这样main才能使用test函数
//void test();
//void sum(int, int);

int main(int argc, char *argvp[])
{
	test();
	sum(1, 2);
	
	return 0;
}

