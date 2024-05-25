#include<stdio.h>

void main()
{
	int age;
	
	printf("Enter the Age of person");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Person is eligible for voting");
		
	}
	else{
		printf("Person is not eligible fo voting");
	}
	
}
