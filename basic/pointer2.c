//函数实现多个返回值
#include <stdio.h>

int sumAndMinus(int v1, int v2, int *p)
{
	*p = v1 - v2;
	return v1+v2;
}

int main(int argc, char *argv[])
{
	int a = 10;
	int b = 4;
	
	//接收和
	int sum;
	//接收差
	int minus;
	
	sum = sumAndMinus(a, b, &minus);
	
	printf("sum=%d, minus=%d", sum, minus);

	return 0;
}
