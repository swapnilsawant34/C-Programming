#include<stdio.h>
//insert element in given array
void main()
{
	int a[5],i,index,no;
	printf("Enter the array elements\n");
	
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("Enter the index to insert in array element\n");
	scanf("%d",&index);
   printf("Enter the element to insert element\n");
	scanf("%d",&no);
	
	
	for(i=4;i>=index;i--)
	{
			a[i+1]=a[i];
		
	}
	a[index]=no;
	for(i=0;i<6;i++)
	{
			printf("a[%d]--->%d\n",i,a[i]);
	}
}
