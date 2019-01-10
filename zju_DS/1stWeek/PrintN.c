// Write two functions to print all integer from 1 to N.

#include <stdio.h>

void PrintN1(int N);
void PrintN2(int N);

int main()
{
	int N = 10;
	printf("PrintN1: loop\n");
	PrintN1(N);
	printf("\n");
	printf("PrintN2: recursion\n");
	PrintN2(N);
	printf("\n");
	
	return 0;
}

//loop
void PrintN1(int N) 
{
	int i;
	for(i=1; i<=N; i++)
		printf("%d ", i);
}

//recursion, simple,clearly but may run out of memory
void PrintN2(int N)
{
	if(N)
	{
		PrintN2(N-1);
		printf("%d ", N);
	}
}
