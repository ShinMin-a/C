#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M;
	int i=0;
	int *ptr;
	int count=0;
	int temp = 0;
	int m;
	scanf("%d %d", &N, &M);
	
	ptr = (int *)malloc(N*sizeof(int));
	
	for(i=0; i<N; i++)
	{
		scanf("%d", ptr+i);
	}
	
	
	if(M>=N && M%N==0 || M==0)
	{
		i=0;
		printf("%d", *(ptr+i));
		for(i=1; i<N; i++) printf(" %d", *(ptr+i)); 
		free(ptr);
		return 0;
	}		
		
	if(M>N)
	{
		M=M%N;
	}

	//print shifted array:0--(N-1)
	for(i=N-M; i<N; i++) printf("%d ", *(ptr+i));
	for(i=0; i<N-M; i++) 
	{
		printf("%d", *(ptr+i));
		if(i!=N-M-1) printf(" ");
	}
	
	free(ptr);
	
	return 0;
}
