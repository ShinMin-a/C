//变量类型

#include <stdio.h>

//a是一个全局变量，静态变量
int a;

void test()
{
	//b是一个局部变量，自动变量(auto省略)
	int b = 0;
	b++;
	
	//c是一个局部变量，静态变量
	static int c = 0;//下次调用时这句会失效
	c++;
	
	printf("b=%d, c=%d\n", b, c);
}

int main(int argc, char *argv[])
{
	for(int i=0; i<3; i++)
	{
		test();
	}

	return 0;
}

