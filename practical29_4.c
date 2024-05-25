#include<stdio.h>
//Move all the negative array element at the end.
void main()
{
	
	int arr[10],size,i,j;
	int temp;
	
	printf("Enter the size:\n");
	scanf("%d",&size);
	
	printf("Enter the array element:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Display array elements:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	
	printf("\nMove all the negative elements to end:\n");
		for(i=0;i<size;i++)
	{
			
			if(arr[i]>0)
		{
			printf("%d\t",arr[i]);
		}
	
	}
	
	
		for(i=0;i<size;i++)
	{
	
			if(arr[i]<0)
		{
			printf("%d\t",arr[i]);
		}
     }

	
}
