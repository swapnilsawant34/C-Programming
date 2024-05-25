#include<stdio.h>

void main()
{
	int a[5],i;
	
	printf("Enter the array values\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Dislapy the array:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nSquare of all elements:\n");
	for(i=0;i<5;i++)
	{
		a[i]=a[i]*a[i];
		printf("%d\t",a[i]);
		
	}
	
	
}
