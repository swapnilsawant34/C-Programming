#include<stdio.h>

void main()
{
	int no,rem,sum=0;
	
	printf("Enter the number");
	scanf("%d",&no);
	
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		
		sum=sum+rem;
	}
	
	printf("Sum of all digits=%d",sum);
}
