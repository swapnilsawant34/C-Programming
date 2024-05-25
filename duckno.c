//1024--duck number
//1234---not duck number

#include<stdio.h>

void main()
{
	int no,rem,flag=0;
	
	printf("Enter the number");
	scanf("%d",&no);  //1024
	
	while(no!=0)
	{
		rem=no%10;  //1024%10=4   //102%10=2   //10%10=0 (rem becocome zero) 
		no=no/10;   //1024/10=102  //102/10=10 //10/10=1
	
	
	if(rem==0)
	{
		flag=1;
		break;
	}
  }
	if(flag)
	{
		printf("number is duck");
	}
	else{
		printf("number is not duck");
	}
}
