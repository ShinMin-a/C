/*
This problem was recently asked by Google.
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given[10, 15, 3, 7] and k of 17, return true since 10+ 7 is 17.
*/

#include <stdio.h>
#include <stdlib.h>

void findTwoNums(int *nums, int n, int k)
{
	int flag = 0;
	for(int i=0; i<n; i++)
	{
		int result = k - nums[i];
		int temp = nums[0];	nums[0] = nums[i]; nums[i] = temp;
		for(int m=1; m<n; m++)
		{
			if(result==nums[m]) flag = 1;
			printf("true: %d + %d = %d\n", nums[0], nums[m], k);
		}
	}
}


int main()
{
	int n, k, i;
	printf("Please input the number of values: ");
	scanf("%d", &n);
	int *nums = malloc(n*sizeof(int));
	printf("Please input values: \n");
	for(i=0; i<n; i++)
	{
		scanf("%d", nums[i]);
	}
	
	printf("Please input the sum number--k: ");
	scanf("%d", &k);
	
	findTwoNums(nums, n, k);
	free(nums);
	
	
	return 0;
}
