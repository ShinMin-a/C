#include <stdio.h>

long Dpart(long A, int DA)
{
	long PA;
	for(PA=0; A; A/=10)
		if(A%10==DA)
			PA=PA*10+DA;
	
	return PA;
}

int main()
{
	long A, B;
	int DA, DB;
	scanf("%ld %d %ld %d", &A, &DA, &B, &DB);
	printf("%ld", Dpart(A, DA) +Dpart(B, DB));
	
	return 0;
}
