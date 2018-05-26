#include <stdio.h>

int main(int argc, char * argv[])
{
	//C中没有布尔类型，真为1，假为0
	//C中非0即为真
	int a = 5;
	int b = 4;
	int c = a > b;
	printf("%d\n", c);
	
	if(-1){
		printf("条件成立\n");
	}else{
		printf("条件不成立\n");
	}
	
	if(5==a){//最好这样写，因为如果少写了一个等号，a=3不会报错，3=a会
		printf("5==a\n");
	}
	
	return 0;
}
