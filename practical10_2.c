#include<stdio.h>
void main()
{
	int a[10],i,sum=0;
	
	printf("Enter the all array elements:\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	//printf("Array elemnts=%d",a[i]);
	printf("Even numbers:\n");
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			
			printf("%d\n",a[i]);
		}

	}
		
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		//	printf("%d\n",sum);
		}

	}
	printf("Sum of all even numbers=%d",sum);
}
