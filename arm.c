#include<stdio.h>

void  main()
{
	int num,x,sum=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	int i=num;
	
	while(i!=0)
	{
		x=i%10;
		sum=sum+x*x*x;
		i=i/10;
	}
	if(num==sum)
	{
		printf("Armsrong number");
	}
	else
	{
		printf("Not armstrong");
	}
}
