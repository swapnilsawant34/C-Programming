#include<stdio.h>

//To find out kth element.
void main()
{
	int arr[10];
	int size,i,k,j,temp;
	
		printf("Enter the size of array:\n");
	scanf("%d",&size);
	 printf("Enter the array elements:\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);   
		
	}
	
	
		for(i=0;i<size;i++)
	{
		for(j=(i+1);j<size;j++)
		{
			if(arr[i]>arr[j]){
			
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		}
	}
	
		printf("\nDisplay the array value:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);   
		
	}
}
