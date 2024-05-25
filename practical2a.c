#include<stdio.h>

void main()
{
	
	float p,n,r,SI;
	
	printf("Enter the principal,no.years and rate of intrest");
	scanf("%f %f%f",&p,&n,&r);
	
	SI=p*n*r/100;
	
	printf("SI= %f",SI);
	
}
