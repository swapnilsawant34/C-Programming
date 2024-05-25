#include<stdio.h>
#include<stdlib.h>
//write a code to input and print array using pointer
void main()
{
	int *ptr,size,i;
	
	printf("Enter the size of u required\n");
	scanf("%d",&size);
	int a[size];
	printf("Enetr the array values\n");
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
}
