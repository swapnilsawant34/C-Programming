#include<stdio.h>

void main()
{
	
	int no,i,sum=0,c;
	
	//printf("Enter the number");
	//scanf("%d",&no);
	i=1;
	
	for(c=1;c<=1000;c++)
	{
	
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
			printf("%d",sum);
		}
		else
		{
			printf("Not perfect");
		}
		
	
    }
}
