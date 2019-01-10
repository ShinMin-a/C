//YouTube: mycodeschool

#include <stdio.h>
#include <stdlib.h>

//Function to merge arrays L and R into A.
//leftCount = number of elements in L.
//rightCount = number of elements in R.
void merge(int *A, int *L, int leftCount, int *R, int rightCount)
{
	//i - to mark the index of left subarray (L)
	//j - to mark the index of right subarray (R)
	//k - to mark the index of merged subarray (A)
	int i=0, j=0, k=0;

	while(i<leftCount && j<rightCount)
	{
		if(L[i]<R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i<leftCount) A[k++] = L[i++];
	while(j<rightCount) A[k++] =  R[j++];
}

//Recursive function to sort an array of integers.
void mergeSort(int *A, int n)
{
	int mid, i, *L, *R;
	if(n<2) return; //If the array has less than two elements, do nothing.
	
	mid = n/2; //find the mid index.
	
	//create left and right subarrays.
	//mid elements (from index 0 till mid-1) should be part of left subarray,
	//and (n-mid) elements (from mid to n-1) will be part of right subarray.
	L = (int *)malloc(mid*sizeof(int));
	R = (int *)malloc((n-mid)*sizeof(int));
	
	for(i=0; i<mid; i++) L[i]=A[i]; //creating left subarray
	for(i=mid; i<n; i++) R[i-mid]=A[i]; //creating right subarray
	
	mergeSort(L, mid); //sorting the left subarray
	mergeSort(R, n-mid); //sorting the right subarray
	merge(A, L, mid, R, n-mid); //Merging L and R into A as sorted list.
	
	free(L);
	free(R);	
}

int main()
{
	int A[] = {6,2,3,1,9,11,5}; 
	int i, numberOfElements;
	
	numberOfElements = sizeof(A)/sizeof(A[0]);
	mergeSort(A, numberOfElements);
	
	for(i=0; i<numberOfElements; i++) printf("%d ", A[i]);
	printf("\n");
	
	return 0;
}

