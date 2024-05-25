#include<stdio.h>

void main()
{
	
	int no,rem,rev=0;
	
	printf("Enter the number");
	scanf
	("%d",&no);
	
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		rev=rev*10+rem;
	}
	
	printf("Reverse Num=%d",rev);
}
