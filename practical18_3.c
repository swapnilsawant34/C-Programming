#include<stdio.h>

void main()
{
	int findmax(int,int);
	int findmin(int,int);
	int n1,n2,max,min;
	printf("Enter the value of n1 and n2\n");
	scanf("%d %d",&n1,&n2);
	
	max=findmax(n1,n2);

	min=findmin(n1,n2);
	
    printf("%d is maximum\n",max);
	printf("%d is minimum",min);
}

int findmax(int n1,int n2)
{
	if(n1>n2)
	{
		printf("n1 is maximum\n");
	}
	else
	{
		printf("n2 is maximum\n");
	}
	return n2;
}

int findmin(int n1,int n2)
{
	if(n1<n2)
	{
		
		printf("n1 is minimum\n");
	}
	else
	{
		printf("n2 is minimum\n");
	}
	return n1;
}
