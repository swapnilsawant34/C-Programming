#include<stdio.h>

void main()
{
	int a[5],min,i;
	
	printf("Enter the array values\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Minimum Number = %d",min);
}
