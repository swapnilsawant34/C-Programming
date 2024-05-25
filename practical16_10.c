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
		 		if(a[i][j]==b[i][j])
		 		{
		 			
		 			printf("Both Matrices are equal\n");
		 			break;
				 }
				 else {
				 	printf("Both Matrices are not equal\n");
				 	break;
				 }
			 }
		 }
	}
