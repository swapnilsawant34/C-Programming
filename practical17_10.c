#include<stdio.h>
#include<stdlib.h>
//serch an element from array using pointer
void main()
{
	int *ptr,size,i;
	
	printf("Enter the size of u required\n");
	scanf("%d",&size);
	int a[size];
	printf("Enetr the array values\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	ptr=&a[0];
	printf("Display array Elements\n");
	for(i=0;i<size;i++)
	{
		printf("%u--->%d\n",ptr,*ptr);
		++ptr;
	}
	int svalue;
	printf("Enter the search value in array\n");
	scanf("%d",&svalue);
		 ptr=a;  //name of array provides base adress of array
	int flag=0;
	

	for(i=0;i<size;i++)
	{
		if(*ptr==svalue)
		{
			flag=1;
			break;
			
		}
		ptr++;
	
	}
		if(flag==1)
		{
			printf("Value is found");
		}
		else
		{
			printf("Value not found");
		}
}
