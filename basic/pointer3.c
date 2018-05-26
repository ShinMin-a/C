//指针与一维数组

#include <stdio.h>

void test0()
{
	int a[2]; //定义一个有两个元素的数组
	int *p;
	
	//这句相当于：
	//p = &a[0];
	p = a;
	 
	*p = 10;
	
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
}

//遍历数组元素
void test1()
{
	printf("test1:\n");
	int a[3] = {1,2,3};
	
	for(int i=0; i<3; i++)
	{
		printf("a[%d]=%d\n", i, a[i]);
	}
}

//利用指针遍历数组元素
void test2()
{
	printf("test2:\n");
	char a[3] = {1,2,3};
	//让指针指向第一个元素
	char *p = a;
	
	for(int i=0; i<3; i++)
	{
		printf("a[%d]=%d\n", i, *(p+i));
	}
}

void test3()
{
	printf("test3:\n");
	int a[3] = {1,2,3};
	int *p = a;
	
	//遍历完数组后，p的值并没有改变
	for(int i=0; i<3; i++)
	{
		printf("a[%d]=%d\n", i, *(p+i));
	}
}

void test4()
{
	printf("test4:\n");
	int a[3] = {1,2,3};
	int *p = a;
	for(int i=0; i<3; i++)
	{//在遍历的过程中，指针的值一直在改变
		printf("a[%d]=%d\n", i, *(p++));
	}
}

void test5()
{
	printf("test5:\n");
	int a[3] = {1,2,3};
	//不能写成a++, 因为a是常量
	for(int i=0; i<3; i++)
	{//可以直接用数组名a，它就是第一个元素的地址
		printf("a[%d]=%d\n", i, *(a+i));
	}
}

int main(int argc, char *argv[])
{
	
	test0();
	return 0;
}
