#include <stdio.h>
#include <ctype.h>

int main()
{
	char a[61], b[61], c[61], d[61];
	scanf("%s", a);scanf("%s", b);scanf("%s", c);scanf("%s", d);
	
	/*Find day, same char from [A-G] and same position in first two lines*/
	int day;
	char *weekdays[] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
	for(day=0; a[day] && b[day]; day++)
	{
		if(a[day]==b[day] && a[day] >= 'A' && b[day] <= 'G')
		{
			printf("%s", weekdays[a[day]-'A']);
			break;
		}
	}
	
	/* Find hour, picking up from day, same character and position, [A-N][0-9]*/	
	int hh;
	for(hh=day+1; a[hh] && b[hh]; hh++)
	{
		if(a[hh]==b[hh])
		{
			if(a[hh]>='A' && a[hh]<='N')
			{
				printf(" %02d", a[hh] - 'A' + 10);
				break;
			}
			if(isdigit(a[hh]))
			{
				printf(" %02d", a[hh]-'0');
				break;
			}
		}
	}
	
	/* Find minute, same alphabet character from last two lines*/
	int mm;
	for(mm=0; c[mm]&&d[mm]; mm++)
		{
			if(c[mm]==d[mm] && isalpha(c[mm]))
			{
				printf(":%02d", mm);
				break;
			}
		}
	
	return 0;
}
