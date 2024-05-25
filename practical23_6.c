#include<stdio.h>
#include<string.h>

void main()
{
	char name1[90];
	char name2[90];
	
	printf("Enter the first string:\n");
	gets(name1);
	
	printf("Enter the second string:\n");
	gets(name2);
	
	strcat(name1,name2);
	
	printf("%s",name1);
	
	
}
