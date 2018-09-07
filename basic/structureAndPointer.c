/*
Referencing pointer to another address to access the memory
Consider an example to access structures's member through pointer.
*/

#include <stdio.h>

struct person
{
	int age;
	float weight;
};

int main()
{
	struct person *personPtr, person1;
	personPtr = &person1;
	
	printf("Enter integer: ");
	scanf("%d", &(*personPtr).age);
	
	printf("Enter number: ");
	scanf("%f", &(*personPtr).weight);
	
	printf("Displaying: ");
	printf("%d\t%f\n", (*personPtr).age, (*personPtr).weight);
	
	return 0;
}
