//预处理指令————条件编译

#include <stdio.h>
#define NUM 10

int main(int argc, char *argv[])
{
	#if NUM > 0
		printf("NUM大于0\n");
	#elif NUM == 0
		printf("NUM等于0\n");
	#else 
		printf("NUM小于0\n");
	#endif
		
	return 0;
}
