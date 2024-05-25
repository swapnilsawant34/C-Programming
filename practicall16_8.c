#include<stdio.h>
//Duplicate element delete

int main()
{
	int a[10],i,j,temp;
	printf("Enter the elements in array\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	
	//sorting in acending

	for(i=0;i<10;i++)
	{
		for(j=(i+1);j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
		printf("\n%d\t",a[i]);
	}
	printf("Elements after removing the duplicate elements\n");
	for(i=0;i<10;i++)
	{   
		if(a[i]!=a[i+1])
		{
			printf("\n%d",a[i]);
		}
		
	}
	
return 0;	
}
