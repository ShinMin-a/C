//卡拉兹(Callatz)猜想

#include <stdio.h>

int main(int argc, char *argv[])
{
	int n = 1;
	int count = 0;
	scanf("%d", &n);
	
	for(count=0; n!=1; count++)
	{
		if(n%2==0)
		{
			n = n/2;
		}
		else
		{
			n = (3*n+1)/2;
		}
	}
	
	printf("%d\n", count);
	
	return 0;
}
