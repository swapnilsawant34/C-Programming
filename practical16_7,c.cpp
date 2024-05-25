#include<stdio.h>
//count the negative numbers from array

int main()
{
	int a[10],i,no,count=0,size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter the array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		if(a[i]>0)
		{
			++count;
		}
		
	}
	printf("Number of negative numbers are %d",count);
	return 0;
}
