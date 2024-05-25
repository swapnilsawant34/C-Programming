#include<stdio.h>

void main()
{
	
	int no,i,sum=0;
	
	printf("Enter the number");
	scanf("%d",&no);
	i=1;
	while(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		
		i++;
    }
		if(sum==no)
		{
			printf("Number is perfect");
		}
		else
		{
			printf("Not perfect");
		}
		
	
	
}
