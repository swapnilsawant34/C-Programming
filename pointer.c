#include<stdio.h>
//pointer
int main()
{
	int a=10,*ptr;
	
	ptr=&a;
	printf("A=%u\n",ptr);
	printf("A=%u\n",&a);
	printf("A=%u\n",*ptr);
	ptr++;
	printf("A=%u\n",ptr);
	
	 *ptr=50;
	printf("*ptr=%u\n",ptr);
	
	
return 0;
	
}
