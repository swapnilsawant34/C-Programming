#include<stdio.h>

int main()
{
	int choice;
	
	printf("Enter the Choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Monday");
			
		break;
		
		case 2:
		 printf("Tuesday");
		 
		break;
		
		case 3:
			printf("Wednsday");
		
		break;
		
		case 4:
		 printf("Thrsuday");
		break;
		 
		case 5:
		 printf("Friday");
		break;
		
		case 6:
		 printf("Saturday");
		 
		break;
		 
		case 7:
		 printf("Sunday");
		 
		break;
		 
		default:
		{
			printf("Wrong choice");
		}     	
		
		 	
	}
	return 0;
}
