#include<stdio.h>

void main()
{
	int f=1,no,i;
	
	printf("Enter the number");
	scanf("%d",&no);
	i=1;
	while(no!=0)
	{
		f=f*i;
		
		i++;
		
		
		
		no--;
		
	}
	
	printf("Factorial=%d",f);
}
