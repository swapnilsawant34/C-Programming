#include<stdio.h>
//Array reverse using pointer

void main()
{
	int a[5],i,temp,size,*ptr;
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
	ptr=a;   //name of array provides base adress of array
	printf("\nReverse array\n");
	
	for(i=0;i<size/2;i++)
	{
		//temp=a[i];
		//a[i]=a[size-i-1];
		//a[size-i-1]=temp;
		temp=*ptr;
		*ptr=a[size-i-1];
		a[size-i-1]=temp;
		ptr++;
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
