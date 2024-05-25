#include<stdio.h>
void main()
{
	int a[3][3],i,j,dia1=0,dia2=0;
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
		 		if(j==2-i)
		 		{
		 			dia1=dia1+a[i][j];
		 			//printf("dia1=%d",dia1);
				 }
				 if(i==j)
				 {
				 	dia2=dia2+a[i][j];
				 	//printf("dia2=%d",dia2);
				 }
				 printf("%d\t",a[i][j]);
			 }
			 printf("\n");
		 }
	printf("dia1=%d",dia1);  //diagonsl1
	printf("dia2=%d",dia2);  //diagonal2
		 
}
