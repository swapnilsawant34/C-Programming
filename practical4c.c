#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter the first side");
	scanf("%d",&a);
	
	printf("Enter the Second side");
	scanf("%d",&b);
	
	printf("Enter the Third side");
	scanf("%d",&c);
	
	//printf("Enter the three sides of Traingle");
	//scanf("%d %d %d",&a,&b,&c);
	
	
	if(a==b && b==c && c==a)  
	{
		printf("Triangle is Equilatoral Triangle");
		
	}
	else if(a==b || a==c || b==c )  
	{
		printf("Triangle is Isosceles Triangle");
		
	}
	else if(a!=b && b!=c && c!=a)   
	{
		printf("Triangle is Scelence Triangle");
	}
}
