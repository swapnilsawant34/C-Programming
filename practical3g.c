#include<stdio.h>

void main()
{
	int year;
	
	printf("Enter the Year");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("Year is leap year");
		
	}
	else
	{
		printf("Year is non leap year");
	}
}



//year=year%4==0;
