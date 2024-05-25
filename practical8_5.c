#include<stdio.h>

void main()
{
	int no,rem,rev=0,temp;
	
	printf("Enter the number");
	scanf("%d",&no);   
	
	temp=no;    
	
	while(no!=0)  
	{
		rem=no%10;       
		no=no/10;   
		
		rev=rev*10+rem;  
	}
	if(rev==temp)
	{
		printf("Number is Palindrome");
		
	}
	else
	{
		printf("Number is not Palindrome");
	}
}
