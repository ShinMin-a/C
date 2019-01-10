/*
Example to check whether an integer is a prime number or an Armstrong or both by creating two swparate functions.
*/

#include <stdio.h>
#include <math.h>

int checkPrimeNumber(int n);
int checkArmstrongNumber(int n);

int main()
{
	int n, flag;
	
	printf("Enter a positive integer: ");
	scanf("%d", &n);
	
	// check prime number
	flag = checkPrimeNumber(n);
	if(flag==1)
		printf("%d is a prime number.\n", n);
	else
		printf("%d is not a prime number.\n", n);
		
	// check armstrong number
	flag = checkArmstrongNumber(n);
	if(flag == 1)
		printf("%d is an Armstrong number.", n);
	else
		printf("%d is not an Armstrong number.", n);
	
	return 0;
}

int checkPrimeNumber(int n)
{
	int i, flag = 1;
	for(i=2; i<=n/2; i++)
	{
		//condition for non-prime number
		if(n%i==0)
		{
			flag = 0;
			break;
		}
	}
	
	return flag;
}

int checkArmstrongNumber(int number)
{
	int originalNum, remainder, result=0, n=0, flag;
	
	originalNum = number;
	
	while(originalNum != 0)
	{
		originalNum /= 10;
		n++;
	}
	
	originalNum = number;
	
	while(originalNum != 0)
	{
		remainder = originalNum%10;
		result += pow(remainder, n);
		originalNum /= 10;
	}
	
	//condition for Armstrong number
	if(result == number)
 		flag = 1;
 	else
 		flag = 0;
 		
 	return flag;
}
