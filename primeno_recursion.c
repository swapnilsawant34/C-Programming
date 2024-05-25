#include<stdio.h>
int count=2;
void main()
{
	int prime(int);
	int no;
	printf("Enter the number:\n");
	scanf("%d",&no);
	int result=prime(no);
	if(result)
	{
		printf("Number is prime");
	}
	else
	{
		printf("Number is not prime");
	}		
}

int prime(int no)
{
	if(count<no && (no%count!=0))
	{
		count++;
		prime(no);
	}
	else
	{
		
		if(count==no)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	
}
