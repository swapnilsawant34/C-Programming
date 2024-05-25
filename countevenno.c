#include<stdio.h>

void main()
{
	int a[5],i,count=0;
	
	printf("Enter the array values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		{
			++count;
		}
		
	}
	printf("Count of even numbers=%d",count);
	
}
