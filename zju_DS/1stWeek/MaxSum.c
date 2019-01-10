// find a subsequence that have the max value

#include <stdio.h>

//T(n)=O(n^3)
int MaxSubseqSum1(int A[], int N)
{
	int ThisSum, MaxSum = 0;
	int i, j, k;
	printf("i:%d, j:%d, k:%d", i, j, k);
	for(i=0; i<N; i++) // i is the left boundary
	{
		for(k=i; j<N; j++) // j is the right boundary
		{
			ThisSum = 0; //sum from A[i] to A[j]
			for(k=i; k<=j; k++)
				ThisSum += A[k];
			if(ThisSum > MaxSum)
				MaxSum = ThisSum;
		}
	}	
	return MaxSum;
}

//T(n)=O(n^2)
int MaxSubseqSum2(int A[], int N)
{
	int ThisSum, MaxSum=0;
	int i, j;
	for(i=0; i<N; i++)
	{
		ThisSum = 0;
		for(j=i; j<N; j++)
			ThisSum += A[j];
		if(ThisSum > MaxSum)
			MaxSum = ThisSum;
	}
	return MaxSum;
}


//T(n)=O(n)
int MaxSubseqSum4(int A[], int N)
{
	int ThisSum, MaxSum;
	int i;
	ThisSum = MaxSum = 0;
	for(i=0; i<N; i++)
	{
		ThisSum += A[i];
		if(ThisSum > MaxSum)
			MaxSum = ThisSum;
		else if(ThisSum < 0)
			ThisSum = 0;
	}
	return MaxSum;
}





//T(n)=O(NlogN)
int Max3(int a, int b, int c)
{//return the max value of three
	return a>b?(a>c?a:c):(b>c?b:c);	
}

int DivideAndConquer(int List[], int left, int right)
{
/*use devide and conquer to calculate the max subseq from List[left] to List[right]*/
	int MaxLeftSum, MaxRightSum; //left and right result
	int MaxLeftBorderSum, MaxRightBorderSum; //coross the border result
	
	int LeftBorderSum, RightBorderSum;
	int center, i;
	
	if(left==right) //recursion stop, only one number
	{
		if(List[left] > 0) return List[left];
		else return 0;
	}
	
	//Divide
	center = (left + right)/2;
	MaxLeftSum = DivideAndConquer(List, left, center);
	MaxRightSum = DivideAndConquer(List, center+1, right);
	
	MaxLeftBorderSum = 0; LeftBorderSum = 0;
	for(i=center; i>=left; i--)
	{
		LeftBorderSum += List[i];
		if(LeftBorderSum > MaxLeftBorderSum)
			MaxLeftBorderSum = LeftBorderSum;
	}
	
	MaxRightBorderSum = 0; RightBorderSum = 0;
	for(i=center+1; i<=right; i++)
	{
		RightBorderSum += List[i];
		if(RightBorderSum > MaxRightBorderSum)
			MaxRightBorderSum = RightBorderSum;
	}
	
	//Conquer
	return Max3(MaxLeftSum, MaxRightSum, MaxLeftBorderSum+MaxRightBorderSum);
}

int MaxSubseqSum3(int A[], int N)
{
	return DivideAndConquer(A, 0, N-1);
}


int main()
{	
	int a[] = {-2, 3, 4, -6, 1, 7};
	int n = 6;
	printf("%d\n", MaxSubseqSum3(a, n));

	return 0;
}
