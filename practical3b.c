#include<stdio.h>

void main()
{
	int no,rem;
	printf("Enter the number");
	scanf("%d",&no);
	
	rem=no%2;
	
	rem==0 ? printf("EVEN"):printf("ODD");
}
