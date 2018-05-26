#include <stdio.h>

void test0()
{//输入一个整数
	//1.提示用户输入数据
	printf("请输入一个整数：");
	
	//2.接收用户输入的数据
	//&a代表变量a的地址
	//输入完毕后敲回车
	int a;
	scanf("%d", &a);

	//3.计算a的平方
	printf("%d的平方为：%d\n", a, a*a);
}

void test1()
{//输入两个整数
	printf("请输入两个整数（用空格隔开）：");
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d + %d = %d\n", a, b, a+b);	
	
}

int main(int argc, char *argv[])
{
	test1();
		
	return 0;
}
