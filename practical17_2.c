#include<stdio.h>
//Addition of numbers using pointer
void main()
{
	int a,b,*ptr1,*ptr2;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	ptr1=&a;
	ptr2=&b;
	
	printf("Add=%d",*ptr1+*ptr2);
}
