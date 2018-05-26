#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("My height is %d\n", 18);
	printf("My height is %4d\n", 18); //输出宽度
	printf("My height is %-4d, hi\n", 18);
	printf("My height is %f\n", 18.555);
	printf("My height is %.2f\n", 18.555);
	printf("My height is %6.2f\n", 18.555);
	printf("My name is %s\n", "Aaron");
	printf("My score is %c\n", 'A');
	
	return 0;
}
