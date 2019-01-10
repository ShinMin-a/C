#include <stdio.h>
#include <string.h>

int main()
{
	char n[101];
	int i=0, sum=0;
	int temp[2];
	char piny[][9] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
	
	
	gets(n);
	
	for(i=0; i<strlen(n); i++)
	{
		sum += n[i]-48;
	}
	
	if(sum>=100)
	{
		temp[2] = sum%10;		
		temp[1] = sum/10%10;		
		temp[0] = sum/100;
		printf("%s %s %s", piny[temp[0]], piny[temp[1]], piny[temp[2]]);
	}
	if(sum<10)
	{
		temp[0] = sum;
		printf("%s", piny[temp[0]]);
	}
	if(sum>9 && sum<100)
	{
		temp[0] = sum/10;
		temp[1] = sum%10;
		printf("%s %s", piny[temp[0]], piny[temp[1]]);
	}

	return 0;
}
