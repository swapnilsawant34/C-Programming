//perfect number

#include<stdio.h>

void main()
{
	int no,i=1,sum=0;
	
	printf("Enter the number");
	scanf("%d",&no);  //6
	
	while(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;    //1+2+3=6
			
			
		}
		i++;
	}
	
	if(sum==no)
	{
		printf("Number is perfect");
	}
	else{
		printf("no perfect");
	}
}
