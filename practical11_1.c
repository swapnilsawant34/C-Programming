#include<stdio.h>

void main()
{
	int i,a[10],choice,svalue,size;
	printf("Enter the array values");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the choice");
	scanf("%d",&choice);
	
	//printf("Array elemnts are\n");
	switch(choice)
	{
		case 1:
			printf("Display elements in array:\n");
			for(i=0;i<10;i++)
	    {
		//scanf("%d",&a[i]);
		printf("%d",a[i]);
	   } 
		
		break;
		
		case 2:
			printf("Search elemnts by value");
			int flag=0;
	     printf("Enter the value to search");
	     scanf("%d",&svalue);
	
	
	for(i=0;i<10;i++)
	{
		if(a[i]==svalue)
		{
			flag=1;
			break;
		}
    }
		if(flag)
		{
			printf("Number found");
		}
		else
		{
			printf("Number not found");
		}
		
		
		break;
		
		case 3:
			printf("Values of an index");
			
			printf("Enter the index");
			scanf("%d",&i);
			
			printf("%d",a[i]);
			for(i=0;i<10;i++)
			{
				scanf("%d",&a[i]);
				//printf("Index values = %d",a[i]);
			}
		
			
			break;
		
		case 4:
			printf("Delete elements at the end\n");
			printf("%d",a[i-1]);
			
			for(i=0;i<10;i++)
			{
				scanf("%d",&a[i-1]);
				printf("%d",a[i]);
			}
			
			break;
			
			
			
		
		default:
			printf("Invalid choice");
			
			 
	}
	
}
