#include<stdio.h>
void main()
{
	long int bs,da,hra,gs;
	
	printf("Enter the basic salary");
	scanf("%ld",&bs);
	
	da=bs*40/100;
    hra=bs*20/100;
    
    gs=bs+da+hra;
    printf("Gross Salary=%d",gs);
	
	
}



