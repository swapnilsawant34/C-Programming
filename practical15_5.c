#include<stdio.h>

//Ceiling Number
void main()
{
	int a[10],i,size,min;
		printf("Enter the size of Array\n");
	scanf("%d",&size);
	
	printf("Enter the array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);  
	}
	int no;
	printf("Enter the number\n");
	scanf("%d",&no);
	
	for(i=0;i<size;i++)
	{
		if(no<a[i])
		{
			printf("%d",a[i]);
			break;
			
		}
		 min=a[0];
		if(a[i]<min)
		{
			min=a[i];
			//printf("Ceiling value for given Number=%d",a[i]);
			//break;
		}
		
		//printf("Ceiling value for given Number=%d",min);
		//break;
	}
	printf("Ceiling value for given Number ",a[i]);
	
		
}
