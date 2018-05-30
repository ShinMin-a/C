//main函数命令行参数

#include <stdio.h>
#include <math.h>
#include <stdlib.h>



/*
命令行：
./mainArg 123 "abc dsf"
输出：
argc=3
./mainArg
123
abc dsf
*/
void test0(int argc, char *argv[])
{
	printf("argc=%d\n", argc); //命令行参数的个数
	for(int i=0; i<argc; i++)
	{
		printf("%s\n", argv[i]);
	}	
}
/*
写一个程序，带命令行参数，例如：
./mainArg 1.2 8
表示求 1.2^8
*/
//调用这个函数，要用：
//gcc mainArg.c -lm -o mainArg

void test1(int argc, char *argv[])
{
	double a = atof(argv[1]); //include <stdlib.h>
	double n = atoi(argv[2]); //include <stdio.h>
	double result = pow(a, n); //include <math.h>
	printf("result: %.2f\n", result);
}

int main(int argc, char *argv[])
{
	//test0(argc, argv);
	//如果命令行参数不是三个提示错误
	if(argc != 3)
	{
		printf("Bad Argument!\n");
		return -1;
	}
	test1(argc, argv);
	return 0;
}


