#include<stdio.h>

void main()
{
	int no,rem,reverse,temp;
	printf("Enter the number");
	scanf("%d",&no);
	

	
//	no=no/10;
	temp=no;
	while(no>0)
	{
		
		
	rem=no%10;
		reverse=(reverse*10)+rem;
	no=no/10;
//	mul=mul*rem;
		
	}
	
	
	
	//printf("Last digit=%d\n",rem);
	//printf("First digit=%d\n",no);
	
	//printf("Sum of First and Last digit is %d\n",rem+no);
	printf("%d",reverse);
	
	if(temp==reverse)
	{
		printf("Number is palidrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
}

