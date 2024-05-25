#include<stdio.h>

void main()
{
	int x,y,z;
	
	printf("Enter the two angle of Traingle");
	scanf("%d%d",&x,&y);
	
	
	
	//a+b+c=180;
	z=180-(x+y);
	
	printf("Third angle=%d",z);
	
}
