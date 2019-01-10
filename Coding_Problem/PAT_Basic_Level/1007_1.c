//try to optimize previous program

#include <stdio.h>
#include <math.h>

int prime(int a)
{
	 int t, j;
	 t = (int)sqrt(a);
	 for(j=2; j<=t; j++)
	 {
	 	if(a%j==0) return 0;
	 }
	 if(j>t) return 1;
}

int main()
{
	int N, count=0, i, i1, n=0;
	int d, p1, p;
	scanf("%d", &N);
	
	for(i=2; i<=N-2; i++)
	{
		if(prime(i)&&prime(i+2)) count++;
	}
	
	
	printf("%d", count);
	
	return 0;
}
