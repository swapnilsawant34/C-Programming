#include<stdio.h>
//Array reverse

void main()
{
	int a[5],i,temp,size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter the array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("Reverse array\n");
	
	for(i=0;i<size/2;i++)
	{
		temp=a[i];
		a[i]=a[size-i-1];
		a[size-i-1]=temp;
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
