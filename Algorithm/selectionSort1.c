//YouTube: mycodeschool

#include <stdio.h>

void selectionSort(int a[], int n)
{
	//We need to do n-2 passes
	for(int i=0; i<n-1; i++)
	{
		//ith position: elements from i till n-1 are candidates
		int iMin = i;
		for(int j=i+1; j<n; j++)
		{
			if(a[j] < a[iMin])
			{
				iMin = j; //update the index of minimum element
			}
		}
		int temp = a[i];
		a[i] = a[iMin];
		a[iMin] = temp;
	}	
}

int main()
{
	int a[] = {2, 7, 4, 1, 5, 3};
	selectionSort(a, 6);
	for(int i=0; i<6; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	return 0;
}
