#include<stdio.h>
		//here matrix is 2 X 3
		//Addition of matrix
		void main()
		{  int a[2][3],b[2][3],c[2][3],i,j,k;
		   
		 printf("\nEnter the values in first matrix\n");
		 for(i=0; i<2; i++)
		 {
		   for(j=0; j<3; j++)
		   {
		     scanf("%d",&a[i][j]);
		   }
		 }
		 printf("\nEnter the values in second matrix\n");
		 for(i=0; i<2; i++)
		 {
		   for(j=0; j<3; j++)
		   {
		     scanf("%d",&b[i][j]);
		   }
		 }
		 printf("\nDisplay the first matrix\n");
		 for(i=0; i<2; i++)
		 {
		   for(j=0;j<3; j++)
		   {
		     printf("%d\t",a[i][j]);
		   }
		   printf("\n");
		 }
		 printf("\nDisplay the second matrix\n");
		 for(i=0;i<2; i++)
		 {
		   for(j=0;j<3; j++)
		   {
		      printf("%d\t",b[i][j]);
		   }
		   printf("\n");
		 }
		 //matrix addition logics
		 for(i=0; i<2; i++)
		 {
		   for(j=0; j<3; j++)
		   {
		     c[i][j]=a[i][j]+b[i][j];
		   }
		 }
		 printf("\nDisplay the resultant matrix\n");

		 for(i=0; i<2; i++)
		 {
		    for(j=0;j<3;j++)
		    {
		      printf("%d\t",c[i][j]);
		    }
		    printf("\n");
		 }

			
		}
