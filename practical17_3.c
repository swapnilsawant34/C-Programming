#include<stdio.h>
//Swapping number using pointers
void main()
{
	int a,b,*ptr1,*ptr2;
	
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	
		printf("Enter the value of b:\n");
	    scanf("%d",&b);
	    
	    ptr1=&a;
	    ptr2=&b;
	    
	    *ptr1=*ptr1+*ptr2;    //a=a+b
	    *ptr2=*ptr1-*ptr2;    //b=a-b
	     *ptr1=*ptr1-*ptr2;   //a=a-b
	     printf("After the swapping\n");
	     printf("A=%d  B=%d",a,b);
	
	
	
}
