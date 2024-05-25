#include<stdio.h>

void main()
{
	int a[5],i,j,temp;
	printf("Enter the all elmnts of an array");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nDisplay array without Ascending and Decending");
	
	for(i=0;i<5;i++)
	{
		printf("\t%d",a[i]);
	}

	
	for(i=0;i<5;i++)
	{
	
	for(j=(i+1);j<5;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}
	//printf("%d",a[i]);
	printf("Display the Acending Order");
    }
    
    for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
    
    for(i=0;i<5;i++)
	{
	
	for(j=(i+1);j<5;j++)
	{
		if(a[i]<a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
		
	}
	//printf("%d",a[i]);
	printf("Display the Decending Order");
    }
    for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
    
    
	
}

