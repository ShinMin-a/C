#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int r = rand();
	int a = rand() % 3; //random integer from 0 to 2
	
	printf("%d\n%d\n", r, a);


	return 0;
}
