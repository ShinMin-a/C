#include <stdio.h>
#include <stdlib.h>


int main()
{
	int k=0, i=0, n=0, count=0, max=1;
	scanf("%d", &k);
	int *ptr = (int *)malloc(k*sizeof(int));
	int *cptr = (int *)malloc(k*sizeof(int));
	for(i=0; i<k; i++)
	{
		scanf("%d", ptr+i);
		*(cptr+n)=*(ptr+i);
		n++;
	}
	
	for(i=0; i<k; i++)
	{
		while(*(ptr+i)!=1)
		{
			if(*(ptr+i)%2==0)
			{
				*(ptr+i) = *(ptr+i)/2;
			}
			else
			{
				*(ptr+i) = (*(ptr+i)*3+1)/2;
				
			}
			for(n=0; n<k; n++)
				{
					if(*(ptr+i)==*(cptr+n))
					{
						*(cptr+n)=1;
					}
				}
		}
	}
	int temp = 0;
	for(i=0; i<k; i++)
	{
		for(n=i+1; n<k; n++)
		{
			if(*(cptr+n)>=*(cptr+i))
			{
				temp = *(cptr+i);
				*(cptr+i)=*(cptr+n);
				*(cptr+n) = temp;
			}
		}
	}
	for(i=0; i<k; i++)
	{
	 	if(*(cptr+i)!=1) 
	 	{
	 		if(i==0) printf("%d", *(cptr+i));
	 		else printf(" %d", *(cptr+i));
	 	}
	 	
	}
	

	free(ptr);
	free(cptr);
	
	return 0;
}
