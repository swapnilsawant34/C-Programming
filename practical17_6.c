#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *ptr,size,i;
	
	printf("Enter the size of u required\n");
	scanf("%d",&size);
	
	//malloc function
	
	ptr=(int*) malloc(sizeof(int)*size);
	printf("Enetr the array value\n:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
		//ptr++;
	}
	printf("Display array Elements\n");
	for(i=0;i<size;i++)
	{
		printf("ptr[%d]--->%d\n",ptr[i]);
		//ptr++;
	}
	
}
