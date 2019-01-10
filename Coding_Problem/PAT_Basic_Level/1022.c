#include <stdio.h>

int main()
{
	int a, b, d;
	scanf("%d %d %d", &a, &b, &d);
	int sum = a+b;
	
	if(sum==0){
		printf("%d", 0);
		return 0;
	}
	int t[100];
	int i=0;
	while(sum != 0)
	{
		t[i++] = sum % d;
		sum = sum / d;
	}
	
	for(int j=i-1; j>=0; j--)
		printf("%d", t[j]);
	
	return 0;
}	
