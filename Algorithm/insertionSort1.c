//YouTube: mycodeschool

#include <stdio.h>

void insertionSort(int a[], int n)
{
	for(int i=1; i<=n-1; i++)
	{
		int value = a[i];
		int hole = i;
		while(hole>0 && a[hole-1]>value)
		{
			a[hole] = a[hole-1];
			hole = hole - 1;
		}
		a[hole] = value;
	}	
}

int main()
{
	int a[] = {7,2,4,1,5,3};
	insertionSort(a, 6);
	for(int i=0; i<6; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	return 0;
}

