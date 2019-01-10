#include <stdio.h>
#include <string.h>

int main()
{
	int i=0,n=0;
	int c=0;
	char s[81];
	gets(s);
	int len=0;
	while(s[i]!='\0')
	{
		len++;
		i++;
	}
	int pre = len;
	
	i--;
	while(i>=0)
	{
		if(s[i]==32)
		{		
			for(n=i+1; n<pre; n++)
			{
				printf("%c", s[n]);
			}
			printf(" ");
			pre = i;
		}
		if(i==0)
		{
			for(c=0; c<pre; c++)
			{
				printf("%c", s[c]);
			}
		}
		i--;
		
	}

	return 0;
}
