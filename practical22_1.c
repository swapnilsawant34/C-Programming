#include<stdio.h>
int arrayOperation(int []);

void main()
{
	int result;
	int a[]={2,3,4,5,7,8};
	
	result=arrayOperation(a);
	

}
int arrayOperation(int a[])
{
	printf("Prime numbers in an array:\n");
	int i,j;
	for(i=0;i<6;i++)
	{
		int flag=0;
		for(j=2;j<a[i];j++)
		{
		
			if(a[i]%j==0)
			{
				flag=1;
				break;
				
			}	
	    }
	    
	  if(flag==0)
			{
		printf("%d\t",a[i]);
		
	       }

	}
	
}
		
	


