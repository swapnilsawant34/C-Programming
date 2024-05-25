#include<stdio.h>

void main()
{
	int a[5],i,svalue;
	
	printf("Enter the array values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int flag=0;
	printf("Enter the value to search");
	scanf("%d",&svalue);
	
	
	for(i=0;i<5;i++)
	{
		if(a[i]==svalue)
		{
			flag=1;
			break;
		}
     }
		if(flag)
		{
			printf("Number found");
		}
		else
		{
			printf("Number not found");
		}
	
}
