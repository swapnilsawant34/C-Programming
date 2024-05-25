#include<stdio.h>

void main()
{
	int a[5],max,i;
	
	printf("Enter the array values\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	//max=a[i];
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Maximum Number = %d",max);
}
