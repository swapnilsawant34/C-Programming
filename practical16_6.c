#include<stdio.h>
//Write code in c to merge two of same size sorted in decending order.
void main()
{
	int a[3],b[3],c[6],i,k,j,temp;
	printf("Enter the 1st array element:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the 2nd array element:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}
	//array merge logic
	for(i=0;i<3;i++)
	{
		c[i]=a[i];
	}	
	for(k=3,i=0;i<3;i++)
	{
		c[k]=b[i];
		k++;
			
	}
	printf("Display first array\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nDisplay Second Array\n");
	for(i=0;i<3;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\nDisplay the array after merging\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",c[i]);
	}
	
	for(i=0;i<6;i++)
	{
		for(j=(i+1);j<6;j++)
		{
			if(c[i]<c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	printf("\nAtfer sorting\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",c[i]);
	}
}
