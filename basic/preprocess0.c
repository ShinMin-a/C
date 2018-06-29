//预处理指令————宏定义
#include <stdio.h>
//NUM叫做宏名
//6是用来替换宏名的
#define NUM 6
#define mul(a, b) ((a)*(b))

void test()
{
	//双引号中的NUM并不会被替换为6
	char *s = "NUMBER";
	int a[NUM] = {1,2,3,4,5};
	
	for(int i=0; i<NUM; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
}

int main(int argc, char *argv[])
{
	int a = mul(10, 10) / mul(2,2);
	printf("%d\n", a);
	return 0;
}
