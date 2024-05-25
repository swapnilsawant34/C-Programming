#include<stdio.h>
#include<math.h>
int count=0,sum=0,flag;
void main()
{
	int findarmstrongno(int); 
	int no,result;
	printf("Enter the number\n");
	scanf("%d",&no);
	
	findarmstrongno(no);
    
}

int  findarmstrongno(int n)
{
	int rem,temp,p;
	temp=n;
	while(n!=0)
	{
		temp=temp/10;
		//rem=n/10;
		++count;
	}
	//n=temp;
	temp=n;
	while(n!=0)
	{
		rem=temp%10;
		
		
		p=pow(rem,count);
		sum=sum+p;
		temp=temp/10;
	}
	
	if(sum==temp)
	{
		//flag=1;
		printf("Number is Aramstrog");
	}
	else
	{
		//flag=0;
		printf("Number is not Armstrong");
	}
	//return flag;
  
} 
