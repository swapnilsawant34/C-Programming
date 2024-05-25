#include<stdio.h>
void main()
{
	int findevenodd(int);
	
	int no;
	printf("Enter the number\n");
	scanf("%d",&no);
	
	findevenodd(no);
}

int findevenodd(int no)
{
	if(no%2==0)
	{
		printf("Number is even");
		
	}
	else
	{
		printf("Number is odd");
	}
}
