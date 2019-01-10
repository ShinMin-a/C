#include <stdio.h>
#include <math.h>

int isPrime(int a)
{
	for(int i=2; i<=sqrt(a); i++)
	{
		if(a%2==0) return 0;
	}
	//if(a==1||a==0) return 0;
	
	return 1;
}

int main()
{
	int M, N;
	int i,t=2,count=0, k;
	
	scanf("%d %d", M,N);
	
	for(t=2; count<=N; t++)
	{	
		int flag=0;
		if(isPrime(t)) 
		{
			count++;
			if( count>=M) printf("%d ", t);	flag++;
			if(count-M<9 && count!=N) printf(" ");
		}
	}
	
	return 0;
}
