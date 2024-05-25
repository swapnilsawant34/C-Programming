#include<stdio.h>

void main()
{
	int age;
	
	printf("Enter the age");
	scanf("%d",&age);
	
	if(age>0 && age<18)
	{
		printf("Children");
		
	}
	else if(age>=18 && age<=35)
	{
		printf("Young");
	}
	else if(age>35 && age<=60)
	{
		printf("Adult Person");
	}
	else if(age>60)
	{
		printf("Old person");
	}
}
