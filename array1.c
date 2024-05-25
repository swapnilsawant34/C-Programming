#include<stdio.h>

void main()
{
	int a[5],i;
	printf("Entter the array value\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Display array value\n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]--> %d\n" ,i,a[i]);
	}
	
}
