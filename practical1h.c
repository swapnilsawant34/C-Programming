#include<stdio.h>   
//reverse no

void main()
{
	int no,rem1,rem2,rem3;
	
	printf("Enter the number:");
	scanf("%d",&no); //123
	
	rem1=no%10; //3   Note: for %(mod) answer is reminder
	no=no/10;  //12         for /(divide) is answer 
	
	rem2=no%10; // 12%10=2
	no=no/10; // 12/10=1
	
	rem3=no%10; // 1
	
	no=(rem1)*100+(rem2)*10+rem3; //logic=need seprate the number
	
	printf("Reverse No=%d",no);
	
	
	
}
