#include<stdio.h>

void main()
{
	int a,b,x,y,z;
	
	printf("Enter the values of a,b");
	scanf("%d%d",&a,&b);
	
	x=++a + b++ + a++ + ++b;
	printf("X=%d",x);
	
	y=(a>b) && (a-b) == (a+b);
	printf("Y=%d",y);
	
	z=(a*b)/(a-b)+a;
	printf("Z=%d");
	
}
