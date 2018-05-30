//字符串的输入
#include <stdio.h>

void test0()
{
	char s1[] = "pxl";
	char s0[2];
	//s0就是数组的地址，所以不用&s
	//scanf("%s", s0);
	//输入完毕后会自动在s0的尾部加一个\0
	
	//使用gets
	//从s0这个地址开始赋值用户输入的字符序列
	//在尾部自动加\0
	gets(s0);
	printf("s0 = %s\n", s0);
	printf("s1 = %s\n", s1);
}

int main(int argc, char *argv[])
{
	test0();

	return 0;
}

