#include<stdio.h>

void main()
{
	int a[7],i;
	
	printf("Enter the values of array\n");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Negative number in array:\n");
	for(i=0;i<7;i++)
	{
			if(a[i]<0)
	     {
		printf("%d\t",a[i]);
	   }
    }
    
   
    
}
