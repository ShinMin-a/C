//指针的应用：交换两个数的值

#include <stdio.h>

/*
void swap(char v1, char v2)
{//并不能实现交换ab值的功能
	printf("交换之前：v1=%d, v2=%d\n", v1, v2);
	char temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
	printf("交换之后：v1=%d, v2=%d\n", v1, v2);
}
*/

void swap(char *v1, char *v2)
{
	char temp;
	temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}

int main(int argc, char *argv[])
{
	char a = 10;
	char b = 9;
	
	printf("调用函数之前：a=%d, b=%d\n", a, b);
	swap(&a, &b);
	printf("调用函数之后：a=%d, b=%d\n", a, b);
	
	return 0;
}
