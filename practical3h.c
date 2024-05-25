#include<stdio.h>

void main()
{
	int no,rem1,rev,rem2,rem3,temp;
	
	printf("Enter the number");
	scanf("%d",&no);
	temp=no;
	rem1=no%10; //121%10=1
	no=no/10;  //121/100=1

	rem2=no%10;
	no=no/10;
	
	rem3=no%10;
	
	rev=(rem1*100)+(rem2*10)+rem3;
	
	
	
	
	if(rev==temp)
	{
		printf("Number is Palindrome");
	}
	else 
	{
		printf("Number is not palindrome");
	}
	
	
}
