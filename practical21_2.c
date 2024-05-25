#include<stdio.h>
int addarray(int[]);
void main()
{


	int a[]={10,20,30,40,600};
	addarray(a);
}

int addarray(int a[])
{
	int i;
	for( i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	return a;
}
