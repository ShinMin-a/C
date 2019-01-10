/*
Example to check if an integer(entered by the user) can be expressed as the sum of two prime numbers of all possible combination with the use of functions.
*/

#include <stdio.h>

int isPrime(int n);

int main()
{
	int n, i, flag=0;
	
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	for(i=2; i<=n/2; i++)
	{
		if(isPrime(i)==1)
		{
			if(isPrime(n-i)==1)
			{
				printf("%d = %d + %d\n", n, i, n-i);
				flag=1;
			}
		}
	}
	
	if(flag==0)
	{
		printf("%d cannot be expressed as the sum of two prime number.", n);
	}
	
	return 0;
}

//Function to check prime number.
int isPrime(int n)
{
	int i, isPrime =1;
	for(i=2; i<=n/2; i++)
	{
		if(n%i==0)
		{
			isPrime=0;
			break;
		}
	}
	
	return isPrime;
}
