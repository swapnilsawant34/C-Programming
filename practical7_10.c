#include<stdio.h>  //to find out factor

void main()
{
	
	int no,i=1;
	
	printf("Enter the number");
	scanf("%d",&no);
	
	while(i<no)
	{
		if(no%i==0)
		{
			
			printf("Factor=%d",i);
		}
		i++;
	}
}
