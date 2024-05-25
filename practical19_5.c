#include<stdio.h>

void main()
{
	int reverseno(int);
	int num,result;
	printf("Enter the number:\n");
	scanf("%d",&num);
	result=reverseno(num);
	printf("%d",result);
}
int reverseno(int no)
{
	int rem1,rem2,rem3;
	if(no!=0)
	{
		rem1=no%10;
		no=no/10;
		
		rem2=no%10;
		no=no/10;
		
		rem3=no%10;
		
		no=(rem1*100)+(rem2*10)+rem3;
		printf("Reversed number is %d",no);
		reverseno(no);
	}
	
 } 
