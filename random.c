#include<stdio.h>
//fibonacii series
void main()
{
	int i=1,f1,f2,fb;
	
	printf("Enter the n1 & n2");
	scanf("%d %d",&f1,&f2);
	printf("%d\n%d\n",f1,f2);
	while(i<=10)
	{
		fb=f1+f2;
		f2=f1;
		
		f1=fb;
	
		printf("%d\n",fb);
			i++;
	}
	

	

}
	
	
