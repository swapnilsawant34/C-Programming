#include<stdio.h>
//square of matrix
		
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
		  printf("\nDisplay the first matrix\n");
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
		  printf("\nDisplay the Second matrix\n");
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
		 		c[i][j]=0;
		 		for(k=0;k<3;k++)
		 		{
		 			c[i][j]=c[i][j]+a[i][k]*b[k][j];
				 }
				 
			 }
			 
		 }
		 
		 printf("\n Display the Squre matrix\n");
		 for(i=0;i<3;i++)
		 {
		 	for(j=0;j<3;j++)
		 	{
		 		printf("%d\t",c[i][j]);
			 }
			 printf("\n");
		 }
	}
