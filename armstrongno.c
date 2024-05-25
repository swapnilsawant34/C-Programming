#include<stdio.h>
#include<math.h>
//Armstrong Number

void main()
{
	int no,rem,sum=0,p,temp,count=0;
	
	printf("Enter the Number");            //step:1 take the no from user
	scanf("%d",&no);
	temp=no;
	
	while(no!=0)
	{
		no=no/10;                          //step:2 count the digit from user
		++count;                             
	}
	  no=temp;
	while(no!=0)
	{
		rem=no%10;           //step :3 seprate the digit from number
		no=no/10;
		
		p=pow(rem,count);    //step4: all power sum
		sum=sum+p;
	}
	
	if(sum==temp)
	{
		printf("Number is armstrong");
	}
	else
	{
		printf("Number is not Armstrong");
	}

}


