//YouTube: mycodeschool

#include <stdio.h>

void bubbleSort(int a[], int n)
{
	for(int k=1; k<=n-1; k++)
	{
		int flag = 0;
		for(int i=0; i<=n-1-k; i++)
		{
			if(a[i] > a[i+1])
			{
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
				flag = 1;
			}
		}
		
		if(flag==0) break;	
	}
}

int main()
{
	int a[] = {2, 7, 4, 1, 5, 3};
	bubbleSort(a, 6);
	for(int i=0; i<6; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	
	return 0;
}
