#include<stdio.h>
void main()
{
	int a[9],i;
	
	for(i=0;i<=8;i++)
	{
	
	scanf("%d",&a[i]);
}
	for(i=4;i<=8;i++)
	{
		printf("%d",a[i]++);
		
	}
	for(i=0;i<=3;i++)
	{
		printf("%d",a[i]++);
	}
}
