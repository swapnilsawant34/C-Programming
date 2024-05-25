#include<stdio.h>
//Menu driven add sub mul div mod using function 
int num1,num2,result;
int add(int ,int);  //global declration.
int sub(int,int);
int mul(int,int);
int div(int,int);
int mod(int,int);
void main()
{
	int ch;
	printf("Enter the numbers num1 and num2\n");
	scanf("%d %d",&num1,&num2);
	
	printf("Enter the choice\n");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:
			result=add(num1,num2); //calling
			
			break;
		
		case 2:
		  result=sub(num1,num2);
		  break;
		  
		case 3:
		  result=mul(num1,num2);
		  break;
		
		case 4:
		  result=div(num1,num2);
		  break;
		  
		case 5:
		  result=mod(num1,num2);
		  break;
		  
		default:
		     printf("Invalid Choice");
			 break;        	
	}
	
	
	
}


int add(int n1,int n2)
{
	result=n1+n2;
	printf("Addition is %d",result);
	
}

int sub(int n1,int n2)
{
	result=n1-n2;
	printf("Subtraction is %d",result);
	
}


int mul(int n1,int n2)
{
	result=n1*n2;
	printf("Multiplication is %d",result);
	
}

int div(int n1,int n2)
{
	result=n1/n2;
	printf("Division is %d",result);
	
}

int mod(int n1,int n2)
{
	result=n1%n2;
	printf("Modulus is %d",result);
	
}


