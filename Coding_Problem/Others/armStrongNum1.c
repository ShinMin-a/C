/*
Check Armstrong Number of n digits.
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int number, originalNum, remainder, result = 0, n=0;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	
	originalNum = number;
	
	while(originalNum != 0)
	{
		originalNum /= 10;
		n++;
	}
	
	originalNum = number;
	
	while (originalNum != 0)
	{
		remainder = originalNum%10;
		result += pow(remainder, n);
		originalNum /= 10;
	}
	
	if(result == number)
		printf("%d is an Armstrong number.", number);
	else
		printf("%d is not an Armstrong number.", number);
	
	return 0;
}
