#include <stdio.h>

int main()
{
	int T, i;
	long int A, B, C;
	
	scanf("%d", &T);
	
	for(i=0; i<T; i++)
	{
		scanf("%ld %ld %ld", &A, &B, &C);
		printf("Case #%d: %s\n", i+1, A+B>C ? "true":"false");
		/*
		if(A+B>C)
		{
			printf("Case #%d: true\n", i+1);
		}
		else printf("Case #%d: false\n", i+1);
		*/
	}

	return 0;
}
