#include<stdio.h>
		
	void main()
	{
		int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
		printf("\nEnter the values in first matrix\n");
		 for(i=0; i<3; i++)
		 {
		   for(j=0; j<3; j++)
		   {
		     scanf("%d",&a[i][j]);
		   }
		 }
		  printf("\n first matrix\n");
		 for(i=0; i<3; i++)
		 {
		   for(j=0;j<3; j++)
		   {
		     printf("%d\t",a[i][j]);
		   }
		   printf("\n");
		 }
		 	printf("\nEnter the values in second matrix\n");
		 for(i=0; i<3; i++)
		 {
		   for(j=0; j<3; j++)
		   {
		     scanf("%d",&b[i][j]);
		   }
		 }
		  printf("\n Second matrix\n");
		 for(i=0; i<3; i++)
		 {
		   for(j=0;j<3; j++)
		   {
		     printf("%d\t",b[i][j]);
		   }
		   printf("\n");
		 }
		 
		 for(i=0;i<3;i++)
		 {
		 	for(j=0;j<3;j++)
		 	{
		 		for(k=0;k<3;k++)
		 		{
		 			sum=sum+a[i][k]*b[k][j];
				 }
				 c[i][j]=sum;
			 }
			 
		 }
		 printf("\n Multiplication of matrix\n");
		 for(i=0;i<3;i++)
		 {
		 	for(j=0;j<3;j++)
		 	{
		 		printf("%d\t",c[i][j]);
			 }
			 printf("\n");
		 }
	}
