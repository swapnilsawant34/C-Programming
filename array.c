#include<stdio.h>

int main()
{
	int a[5],i;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display array value");
	for(i=1;i<5;i++)
	{
		printf("a[%d]-->%d/n",i,a[i]);
	}
	return 0;
}
