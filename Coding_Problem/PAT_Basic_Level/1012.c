#include <stdio.h>

int main()
{
	int A1=0, A2=0, A3=0, A4=0, A5=0;
	int N,i,num;
	int A2flag=0, A4count = 0;
	scanf("%d", &N);
	
	for(i=0; i<N; i++)
	{
		scanf("%d", &num);
		
		switch(num%5)
		{
			case 0: A1 += num%2 ? 0 : num; break;
			case 1: A2flag = A2flag==1?-1:1; A2 += A2flag*num; break;
			case 2: A3++; break;
			case 3: A4count++; A4 += num; break;
			case 4: A5 = num>=A5?num:A5; break;
		}
	}
	
	if(A1==0) printf("N "); else printf("%d ", A1);
	if(A2flag==0) printf("N "); else printf("%d ", A2);
	if(A3==0) printf("N "); else printf("%d ", A3);
	if(A4==0) printf("N "); else printf("%.1f ", A4*1.0/A4count);
	if(A5==0) printf("N"); else printf("%d", A5);

	return 0;
}
