#include<stdio.h>
//Number swap using call by reference
void main()
{
	int numSwap(int*,int*);
	int a,b;
	printf("Enter the value of a and b");
	scanf("%d %d",&a,&b);
	
	numSwap(&a,&b);
	printf("A=%d \t B=%d\n",a,b);
}
int numSwap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
	
	printf("X=%d \t Y=%d\n",*x,*y);
	
	
}
