#include<stdio.h>

void main()
{
	int no,rem,mul=1;
	
	printf("Enter the number");
	scanf("%d",&no);
	
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		
		mul=mul*rem;
	}
	
	printf("product of all digits=%d",mul);
}
