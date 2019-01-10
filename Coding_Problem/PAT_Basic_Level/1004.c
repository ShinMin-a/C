//成绩排名

#include <stdio.h>

int main(int argc, char *argv[])
{
	int count;
	scanf("%d\n", &count);
	char name[count][10];
	char num[count][10];
	int score[count];
	int i = 0;
	
	while(count>0)
	{
		scanf("%s %s %d\n", name[i], num[i], &score[i]);	
		i++;
		count--;
	}
	for(int i=0;i<3;i++){
		printf("%d\n", score[i]);
	}

	return 0;
}
