#include<stdio.h>
//How to Allocate the Memory in pointer at run time time 

int main()
{
	int size,*ptr,i;
	
	printf("How much memory  u required\n");
	scanf("%d",&size);
	
	for(i=1;i<=size;i++)
	{
		printf("Enter the value of %u  address\n",ptr);
		scanf("%d",ptr);
		ptr++;    //ptr=ptr+size*increment/decrement
	}
	ptr=ptr-size;
	printf("\nDisplay the all values of array\n");
	
	for(i=1;i<=size;i++)
	{
		printf("%u--->%d\n",ptr,*ptr);
		ptr++;
	}
	
	return 0;
}
