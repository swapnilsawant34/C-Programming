#include<stdio.h>

void main()
{
	int i,arr[10],N,j,temp,n;
	

	printf("Enter the size of array:\n");
	scanf("%d",&N);
	
    printf("Enter the array elements:\n");
	
	for(i=0;i<=N;i++)
	{
		scanf("%d\t",&arr[i]);
		
	}
	
	printf("Display the array value:\n");
	for(i=0;i<=N;i++)
	{
		printf("%d\t",arr[i]);   
		
	}
	
	for(i=0;i<=N;i++)
	{
		for(j=(i+1);j<=N;j++)
		{
			if(arr[i]>arr[j]){
			
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		}
	}
	
		printf("Display the array value:\n");
	for(i=0;i<=N;i++)
	{
		printf("%d\t",arr[i]);   
		
	}
	
	
		int k=3;
	//printf("Enter the Kth smallest value\n");
	//scanf("%d",&k);
	
	n=sizeof(arr)/sizeof(arr[0]);
	
	arr[i]=arr[i+n];
	
	printf("\nKth smallest element %d",k,arr[i]);
	

}
