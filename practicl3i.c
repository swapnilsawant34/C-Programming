#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter the three sides of Traingle");
	scanf("%d %d %d",&a,&b,&c);
	
	
	if(a==b && b==c && c==a)  
	{
		printf("Equilatoral");
		
	}
	else if(a==b || a==c || b==c )  
	{
		printf("Isosceles");
		
	}
	else if(a!=b && b!=c && c!=a)   
	{
		printf("Scelence");
	}
}	
