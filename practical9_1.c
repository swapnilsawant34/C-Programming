#include<stdio.h>

void main()
{
	int a[5],i,sum=0;
	
	printf("Enter the values of array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<6;i++)
	{
		sum=sum+a[i];
	}
	
	printf("Sum=%d",sum);
	//printf("Sum=%d",a[0]+a[1]+a[2]+a[3]+a[4]);
	
	
}



