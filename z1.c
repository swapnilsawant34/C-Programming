#include<stdio.h>  //to find out prime no or not using for

void main()
{
	int no,i=2,flag=0;
	printf("Enter the number");
	scanf("%d",&no);
	
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			flag=1;
			break;
		}
		i++;
		
	}
	if(flag==0)
	{
		printf("Number is prime");
		
	}
	else{
		printf("Number is not prime");
	}
}
