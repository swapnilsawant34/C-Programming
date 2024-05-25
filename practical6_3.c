#include<stdio.h>

void main()
{
	int choice,no;
	
	printf("Enter the number");
	scanf("%d",&no);
	int	i=1;
	printf("Enter the choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			if(no>0 && no<0)
			{
				printf("Number is Positive");
			}
			else{
				printf("Number is negative");
			}
			
		break;
		
		case 2:
		    if(no%2==0)
			{
				printf("Number is Even");
				
			}
			else{
				printf("Number is odd");

			}
		break;
		
		case 3:
			
			while(i<=10)
		{
			printf("%d\n",i*no);
			i++;
		}
		break;
		default:
			{
				printf("Wrong choice");
			}
		   	
					
	}
}
