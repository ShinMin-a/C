//枚举
#include <stdio.h>

void test0()
{
	//定义一种枚举类型
	enum Season {spring, summer, autumn, winter};
	//定义一个枚举变量s
	enum Season s = winter;
}

void test1()
{
	//定义枚举类型的同时定义一个枚举变量s
	enum Season {spring, summer, autumn, winter} s = spring;
}

void test2()
{
	enum {spring, summer, autumn, winter} s1 = summer;
	//枚举元素默认作为整型处理，从0开始
	printf("%d\n", s1);
}

int main(int argc, char *argv[])
{
	test2();
	return 0;
}
