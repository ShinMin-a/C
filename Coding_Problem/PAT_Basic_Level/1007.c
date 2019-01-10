//This program time complexity is to big, when n is big enough, 
//running time too long. 

#include <stdio.h>

int prime(int a)
{
	int z=0;
	if(a==1) return 0;
	if(a==2) return 1;
	for(z=2; z<a; z++)
	{
		if(a%z==0) return 0;
	}
	
	return 1;
}

int main()
{
	int N, count=0, i, i1;
	int d, p1, p;
	scanf("%d", &N);
	
	for(i=1; i<=N; i++)
	{
		if(prime(i))
		{
			p=i;
			for(i1=i+1; i1<=N; i1++)
			{
				if(prime(i1)) 
				{
					p1 = i1;
					if(p1-p==2) count++;
				}
			}
		}
	}
	
	printf("%d", count);
	
	return 0;
}
