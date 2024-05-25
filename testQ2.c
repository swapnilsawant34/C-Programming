#include<stdio.h>

void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i>=j)    //row is greater than colouumn then print the value of coloumn
			{
				printf("%d ",j);
			}
			else
			{
				printf(" ");
			}
		}
		
		printf("\n");
	}	
}
