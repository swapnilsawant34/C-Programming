#include<stdio.h>

void main()
{
	int size,i,k,j,temp;
	int arr[10];
		printf("Enter the size of array:\n");
	scanf("%d",&size);
	

	

    printf("Enter the array elements:\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d\t",&arr[i]);
		
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
	
		printf("Display the array value:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);   
		
	}
	
	
	
	printf("\nEnter the value of k\n");
	scanf("%d",&k);
	
	
	
;
	
	for(i=0;i<size;i++)
	{
	  if(i==k-1)
	  {
	  		printf("%d\t",arr[i]); 
	  	
		}  
		
	}
}
