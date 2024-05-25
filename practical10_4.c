#include<stdio.h>
void main()
{
	int a[10],i,j,k=0;
	printf("Enter the all Elements in an Array");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<10;i++)
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
		
	
		
		//printf("Prime numbers are=%d",a[i]);
	}
	
}
