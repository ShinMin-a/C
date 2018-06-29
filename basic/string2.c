#include <stdio.h>
#include <string.h>

//strlen()
//不包括\0这个字符
void test()
{
	//测量字符串常量的字符长度
	int len = strlen("潘雪磊");
	printf("%d\n", len);
	
	//测量字符串变量的字符长度
	char s[] = "pxl";
	printf("%d\n", strlen(s));
	
	//结果是5，内存中的存储是：pxpxl\0
	char s1[] = {'p', 'x'};
	printf("%d\n", strlen(s1));	
}

//strcpy
void test1()
{
	char left[10];
	//拷贝"itcast"到数组left中
	strcpy(left, "itcast");
	printf("%s\n", left);
}

//strcat
void test2()
{
	char left[10] = {'p', 'x', 'l', '\0'};
	//从left的第一个\0开始拼接Aaron这个字符串
	//拼接的结果是：pxlAaron\0
	strcat(left, "Aaron");
	printf("%s\n", left);
}

//strcmp
void test3()
{
	int delta = strcmp("Abc", "abc");
	printf("%d\n", delta);
}
int main(int argc, char *argv[])
{

	test3();
	return 0;
}

