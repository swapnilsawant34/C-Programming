#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter the first angle");
	scanf("%d",&a);
	
	printf("Enter the Second angle");
	scanf("%d",&b);
	
    printf("Enter the Third angle");
	scanf("%d",&c);
	
	//a+b+c=180;
	
	if((a+b+c)<=180)
	{
		printf("The triangle is valid");
		
	}
	else{
		printf("The traingle is Invalid");
	}
}
