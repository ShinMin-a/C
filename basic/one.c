#include <stdio.h>

//定义一个one函数
//完整定义一个外部函数需要extern关键字
/*extern void one()
{
	printf("调用了one函数\n");
}*/

//默认情况下就是外部函数，省略extern
void one()
{
	printf("调用了one函数\n");
}
