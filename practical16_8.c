#include<stdio.h>
//Duplicate element delete
int main()
{
	int a[10],i,j,temp;
	printf("Enter the elements in array\n");
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
	//sorting in acending

	for(i=0;i<10;i++)
	{
		for(j=(i+1);j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
		printf("%d",a[i]);
	}
	//	printf("%d",a[i]);
	for(i=0;i<10;i++)
	{   
		if(a[i]!=a[i+1])
		{
			printf("%d",a[i]);
			//count++;
		}
		
	}
	
return 0;	
}
