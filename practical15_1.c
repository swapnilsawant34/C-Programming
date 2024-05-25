#include<stdio.h>
// Find second highest number
void main()
{
	int a[5],i,j,temp;
	printf("Enter the array element:\n");
	
	for(i=0;i<5;i++)
	{
		
		scanf("%d",&a[i]);
	}
	
	printf("Array element are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("After the sory of array:\n");
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
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	int size;
	
	int large=a[size-1];
	int count=0;
		
	for(i=0;i<5;i++)
	{
		if(a[i]==large)
		{
			++count;
		}
			
	}
	size=sizeof(a)/sizeof(i);
	printf("Second highest=%d",a[(size-count)-2]);
}
