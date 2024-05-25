#include<stdio.h>

void main()
{
	int no,sd,rem,flag=0;
	
	printf("Enter the nmuber");
	scanf("%d",&no);
	
	printf("Enter the digit number");
	scanf("%d",&sd);
	
	while(no!=0)
	{
		rem=no%10;
		no=no/10;
		
		if(rem==sd)
		{
			flag=1;
			break;
		}
	}
	
	if(flag)
	{
		printf("Digit found");
	}
	else{
		printf("Digit not found");
	}
}
