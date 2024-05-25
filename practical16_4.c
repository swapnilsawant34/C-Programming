#include<stdio.h>
//delete element from array

void main()
{
	int a[10],i,j,index;
	printf("Enter the array element\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
		
	}
	
	printf("Ener the index to delete from array");
	scanf("%d",&index);
	for(i=index;i<9;i++)
	{
		a[i]=a[i+1];
				
	}
	
	for(i=0;i<9;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}

}
