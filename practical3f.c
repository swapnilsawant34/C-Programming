#include<stdio.h>

void main()
{
	int days,weeks,month,year;
	
	printf("Enter the No. of days");
	scanf("%d",&days);
	
	weeks=days/7;
	month=days/30;
	year=days/365;
	
	printf("Week=%d",weeks);
	printf("month=%d",month);
	printf("Year=%d",year);
}
