#include<stdio.h>

void main()
{
	int findprimeno(int);
	int n;
	printf("Enter the given  range/interval\n");
	scanf("%d",&n);
	findprimeno(n);
}

int findprimeno(int n)
{
	int i,j;
	
	printf("Prime numbers are:\n");
	for( i=2;i<=n;i++)
	{
		int count=0;
	   for(j=1;j<=i;j++)
	   {
	   
		   if(i%j==0)
		   {
		
		   count++;
	        }
       }
	 if(count==2)
	 {
	 	printf("%d\n",i);
     }
	 
   }
	
}
