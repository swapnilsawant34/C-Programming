#include<stdio.h>

void main()
{
	int no,rem,rev=0,temp;
	
	printf("Enter the number");
	scanf("%d",&no);   //121
	
	temp=no;    //temp=121
	
	while(no!=0)  //121!=0
	{
		rem=no%10;  // 121%10=1     
		no=no/10;   // 121/10=12
		
		rev=rev*10+rem;  // 0*10+1
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
