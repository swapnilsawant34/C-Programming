#include<stdio.h>
int sum=0,sum1=0;
void main()
{
	int evensum(int);
	int oddsum(int);
	
	int n,result;
	printf("Enter the range\n");
	scanf("%d",&n);
	
	result=evensum(n);
	printf("Sum of even numbers=%d\n",sum);
	//printf("Sum of Even numbers %d",result);
	
	oddsum(n);
	printf("Sum of odd numbers=%d\n",sum1);
	//printf("Sum of Even numbers %d",result);
}

int evensum(int range)
{  
int i=1;
  for( i=1;i<=range;i++)
  {
	if(i%2==0)
	{
		printf("Even numbers are %d\n",i);
		
		sum=sum+i;
		
	//	printf("Sum of even numbers=%d\n",sum);
	}
	
	
 }
}


int oddsum(int range)
{
int i=1;
for( i=1;i<=range;i++)
{
	if(i%2==1)
	{
		printf("Odd numbers are %d\n",i);
		
		sum1=sum1+i;
		
	//	printf("Sum of even numbers=%d\n",sum);
	}
	
}
}



