//Create initialize and use pointer

#include<stdio.h>

void main()
{
	int *ptr,a=10;
	ptr=&a;
	
	printf("A=%u\n",*ptr);
	printf("A=%d\n",*ptr);
	//printf("A=%d\n",ptr);
	//printf("A=%u\n",ptr);
}
