#include<stdio.h>
void main()
{
	int a[3][3],i,j,sum1=0,sum2=0;
	 printf("\nEnter the values matrix\n");
		 for(i=0; i<3; i++)
		 {
		   for(j=0; j<3; j++)
		   {
		     scanf("%d",&a[i][j]);
		   }
		 }
		 
		 for(i=0;i<3;i++)
		 {
		 	for(j=0;j<3;j++)
		 	{
		 		if(i==1)
		 		{
		 			sum1=sum1+a[i][j];
				 }
				 if(j==1)
				 {
				 	sum2=sum2+a[i][j];
				 }
				 printf("%d\t",a[i][j]);
			 }
			 printf("\n");
		 }
		 printf("Sum1=%d",sum1);
		 printf("Sum2=%d",sum2);	
}
