/*
Using C calloc() and free()
Write a C program to find sum of n elements entered by user. To perform this program, allocate memory dynamically using calloc() function.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num, i, *ptr, sum = 0;
	printf("Enter number of elements: ");
	scanf("%d", &num);
	
	ptr = (int *)calloc(num, sizeof(int));
	if(ptr==NULL)
	{
		printf("Error! memory not allocated.");
		exit(0);
	}
	
	printf("calloc() initialize elements to 0: %d\n", *ptr);
	printf("Enter elements of array: ");
	for(i=0; i<num; i++)
	{
		scanf("%d", ptr+i);
		sum += *(ptr+i);
	}
	
	printf("Sum = %d\n", sum);
	free(ptr);
	
	return 0;
}
