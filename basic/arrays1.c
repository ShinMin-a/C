//数组与函数

#include <stdio.h>

void test0(int a) //不改变a[0]
{
	a = 9;
}

void test1(int array[]) //改变a[0]
{
	array[0] = 9;
}

int main(int argc, char *argv[])
{
	
	int a[3] = {10,};
	printf("函数调用前的a[0]: %d\n", a[0]);
	
	//test0(a[0]);
	test1(a);
	
	printf("函数调用后的a[0]: %d\n", a[0]);
	
	return 0;
}
