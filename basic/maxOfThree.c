//Biggest of three numbers using conditional operator/ternary operator in C

#include <stdio.h>

int main()
{
	int a, b, c, max;
	printf("Enter three numbers:\n");
	scanf("%d %d %d", &a, &b, &c);
	max = a>b?(a>c?a:c):(b>c?b:c);
	printf("\nThe biggest number is: %d\n", max);
	
	return 0;
}
