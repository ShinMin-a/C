#include <stdio.h>

//如何输入带空格的一串字符
void test0()
{
	char a[20];
	char b[20];
	char c[20];
	//输入 pan xue lei
	gets(a);
	printf("使用gets：\n%s\n\n", a);
	
	scanf("%[^\n]", b);
	printf("使用%[^\\n]：\n%s\n\n", b);
	
	scanf("%s\n", &c); //错误	
	printf("直接使用scanf：\n%s\n\n", c);
}

//scanf返回值作为while循环的判断条件
void test1()
{
	int i = 0;
	char a[10];
	while((scanf("%c", &a[i]) != EOF) && i<9)
	{
		i++;
	}
}

int main(int argc, char *argv[])
{
	test1();
	return 0;
}
