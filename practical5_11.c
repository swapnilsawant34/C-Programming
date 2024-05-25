#include<stdio.h>

void main()
{
	
	int choice;
	printf("1:Jan");
	printf("2:feb");
	printf("3:March");
	printf("4:Apr");
	printf("5:May");
	printf("6:June");
	printf("7:July");
	printf("8:August");
	printf("9:Sep");
	printf("10:oct");
	printf("11:Nov");
	printf("12:Dec");
	
	printf("Enter the month number");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("31");
		break;
		
		case 2:
			printf("28");
		break;
		
		case 3:
			printf("31");
		break;
		
		case 4:
			printf("30");
		break;
		
		case 5:
			printf("30");
		break;
		
		case 6:
			printf("31");
		break;
		case 7:
			printf("30");
		break;
		case 8:
			printf("31");
		break;
		case 9:
			printf("31");
		break;
		case 10:
			printf("30");
		break;
		case 11:
			printf("31");
		break;
		case 12:
			printf("30");
		break;
	
		
		default:
			{
				printf("Wrong choice");
			}
			
	}
}
