/*
1. Write a C program to print your name, date of birth. and mobile number. Go to the editor
Expected Output:

Name   : Alexandra Abramov  
DOB    : July 14, 1975  
Mobile : 99-9999999999
*/

#include <stdio.h>

void test0()
{
	char name[50];
	char birth[50];
	char mobile[50];
	
	gets(name);
	gets(birth);
	gets(mobile);
	
	printf("Name   : %s\n", name);
	printf("DOB    : %s\n", birth);
	printf("Mobile : %s\n", mobile);
}

int main(int argc, char *argv[])
{
	test0();
	return 0;
}
