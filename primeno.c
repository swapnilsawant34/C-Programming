#include<stdio.h>  //to find out prime no or not

void main()
{
	int no,i=2,k=0;
	printf("Enter the number");
	scanf("%d",&no);
	
	while(i<no)
	{
		if(no%i==0)
		{
			k=1;
			break;
		}
		i++;
		
	}
	if(k==0)
	{
		printf("Number is prime");
		
	}
	else{
		printf("Number is not prime");
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
