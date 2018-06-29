//调用one.c中的函数one

#include <stdio.h>

//完整的声明一个函数，需要用到extern关键字，表示引用一个外部函数
//extern void one();
//extern 可以省略
void one();

int main(int argc, char *argv[])
{
	one();
	return 0;
}
