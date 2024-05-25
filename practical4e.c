#include<stdio.h>
#include<math.h>

void main()
{
	int a,b,c;
	float root1,root2,x;
	
	printf("Enter the value of a");
	scanf("%d",&a);
	
	printf("Enter the value of b");
	scanf("%d",&b);
	
	printf("Enter the value of c");
	scanf("%d",&c);
	
	
		x=(sqrt((b*b)-(4*a*c)));
	
	root1=-b+x/2*a; 
	
	                                               //root1=-b+(sqrt((b*b)-(4*a*c)))/2*a;
	//x=(sqrt((b*b)-(4*a*c)));
	
	
	
	//root2=-b-(sqrt((b*b)-(4*a*c)))/2*a;                                                   //root2=-b-(sqrt((b*b)-(4*a*c)))/2*a;
	
	printf("Root1=%f",root1);
	//printf("Root2=%f",root2);
}
