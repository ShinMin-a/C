//内存的动态分配与释放

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	//2.动态分配字符串
	int n = 5;
	char *str = malloc(n+1); //'\0'
	strcpy(str, "Hello");
	printf("%s\n", str);
	//用完后释放内存
	free(str); 
	
	char str1[20] = "Hello";
	char *str2 = "World";
	
	char *result = strcat(str1, str2);
	printf("result=%s\n", result);
	
	
	//1.库函数
	//malloc 分配内存，不初始化
	//calloc 分配内存并初始化
	//realloc 重新分配内存
	
	return 0;
}
