//字符串数组

#include <stdio.h>

//第一种方式
void test0()
{
	char *name[] = {"pan", "xue", "lei"};
	//printf("%d\n", sizeof(name));
	//printf("%d\n", sizeof(name[0]));
	for(int i=0;i<sizeof(name)/sizeof(name[0]); i++)
	{
		printf("%s\n", name[i]);
	}
}

//第二种方式
void test1()
{
	char name[][10] = {"pan", "xue", "lei"};
	for(int i=0; i<sizeof(name)/sizeof(name[0]); i++)
	{
		printf("%s\n", name[i]);
	}
}

int main(int argc, char *argv[])
{
	test1();
	return 0;
}
