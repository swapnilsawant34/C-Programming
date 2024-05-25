#include<stdio.h>

void main()
{
	int no,rem,add;
	
	printf("Enter the number");
	scanf("%d",&no);
	
	rem=no%10;
	no=no/100;
	
	add=rem+no;
	
	printf("Adition of last and first digit=%d",add);
	
	
	
}
