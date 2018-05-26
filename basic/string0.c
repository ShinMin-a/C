#include <stdio.h>

//字符串的定义和初始化
void test0()
{
	//"pxl"
	char s[] = {'p', 'x', 'l', '\0'};//字符串"pxl"
	char s1[4] = {'p', 'x', 'l', '\0'};//字符串"pxl"
	char s2[4] = {'p', 'x', 'l'};//错误
	char s3[] = "pxl";//字符串"pxl"，会自动在尾部加上一个 \0
}

//输出字符串
void test1()
{
	char s[] = "pxl";
	printf("作为字符串：%s\n", s); //这里s可以代表地址,也可以代表字符串
	printf("作为地址：%d\n", s);
}

int main(int argc, char *argv[])
{
	test1();
	
	return 0;
}
