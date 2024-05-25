#include<stdio.h>
void main()
{
	int choice,a,b;
	printf("1:Addition");
	printf("2:Substraction");
	printf("3:Multiplication");
	printf("4:Division");
	printf("5:Modulus");
	
	printf("Enter the values of a & b");
	scanf("%d %d",&a,&b);
	
	printf("Enter the choice");
	scanf("%d",&choice);
	
	switch(choice)
	{
		
		case 1:
			printf("Addition=%d",a+b);
			
		break;
		
		case 2:
			printf("Substraction=%d",a-b);
			
		break;
		
		case 3:
			printf("Multiplication=%d",a*b);
			
		break;
		
		case 4:
			printf("Division=%d",a/b);
			
		break;
		
		case 5:
			printf("Addition=%d",a%b);
			
		break;
		
	 default:
	 {
	 	printf("Wrong choice");
		 }	
	}
}
