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
































//void main()
//{
//	int i=1,n1,n2,sum,n;
	
//	printf("Enter the n1 & n2");
//	scanf("%d %d",&n1,&n2);

//	printf("%d\n%d\n",n1,n2);
//	while(i<=10)
//	{
//		sum=n1+n2;
//		n2=n1;
		
//		n1=sum;
	
//		printf("Sum=%d\n",sum);
//			i++;
//	}
	
	
//}
