//C语言中编译器不会对数组下标越界进行检查

#include <stdio.h>

void test1() //数组的地址相关
{
	int ages[5];
	//计算数组占据的存储空间
	//int size = sizeof(ages);
	//printf("ages占据到字节：%d\n", size);
	//查看数组的地址
	//第一种方式：
	//printf("%d\n", &ages[0]);
	//第二种方式：
	//printf("%d\n", ages);
	//数组名代表的就是数组的地址，也就是第0个元素的地址
	//ages == &ages[0];
	//ages是一个常量
	
	//查看每一个数组元素的地址
	for(int i=0; i<5; i++)
	{
		printf("ages[%d]的地址：%d\n", i, &ages[i]);
	}
}

void test2() //数组的初始化
{
	int a[2] = {8, 10};
	//int a[] = {8, 10};
	//int a[2] = {8, };
	
	int b[2];
	b[0] = 8;
	b[1] = 10;
}

int main(int argc, char *argv[])
{
	
	return 0;
}
