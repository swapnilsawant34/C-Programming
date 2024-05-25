#include<stdio.h>

void main()
{
	int a[10],i,size;
	printf("Enter the size of Array\n");
	scanf("%d",&size);
	
	printf("Enter the array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
      
	int n;
	printf("Enter the position to rorate\n");
	scanf("%d",&n);
	 
	  
	  for(i=n;i<size;i++)
	  {
	    printf("%d",a[i]++); 	
	 }
	 
	 for(i=0;i<n;i++)
	  {
	  	printf("%d",a[i]++);
	  }	
	
}
