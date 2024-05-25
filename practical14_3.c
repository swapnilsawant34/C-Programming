#include<stdio.h>

int main()
{
	int a[10],i,num,count=0;
	
	printf("Enter the elements in array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter element:\n");
	scanf("%d",&num);
	
	
	printf("Occurence of element:\n");
	for(i=0;i<10;i++)
	{
		if(a[i]==num)
		{
	    	++count;		
		}
		
		
	}
	printf("Number is:%d--->Count is:%d",num,count);
	return 0;
	
}
