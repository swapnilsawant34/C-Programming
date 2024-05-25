#include<stdio.h>
#include<stdlib.h>
//copy one array to another using pointer
void main()
{
	int *ptr,size,i,*ptr1;
	
	printf("Enter the size of u required\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the array values\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=&a[0];
	printf("Display array Elements\n");
	for(i=0;i<size;i++)
	{
		printf("%u--->%d\n",ptr,*ptr);
		++ptr;
	}
		
	
	int b[size];
	ptr1=&b[0];
	printf("Elements copied from original array:");
	for(i=0;i<size;i++)
	{
		//b[size]=a[size];
		b[i]=a[i];
		printf("%u--->%d\n",ptr1,*ptr1);
		
		++ptr1;
		
		
	}

}
