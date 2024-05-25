#include<stdio.h>

void main()
{
	int no,rem,sum=0;
	
	printf("Enter the number");
	scanf("%d",&no);  //123
	
	rem=no%10;  //3
	no=no/10;   //12
	
		sum=sum+rem; //0+3
	
	rem=no%10;  //12%10=2
	no=no/10;   //12/10=1
	
	sum=sum+rem; //3+2
	
	rem=no%10;  //
	no=no/10; 
	
	sum=sum+1;
	printf("Sum=%d",sum);
}
