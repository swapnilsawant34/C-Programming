#include<stdio.h>

int main()
{
	int a[10];
	int size,i,j,s;
	printf("Enter the size off array:\n");
	scanf("%d",&size);
	printf("Enter the array element:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("Display the array:\n");
		for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
		
	}
	
	printf("\nEnter the Sum:\n");
	scanf("%d",&s);
	
	int sum=0;
	
	
	for(i=0;i<size;i++)
	{
		sum=a[i];
		for(j=(i+1);j<=size;j++)
		{
			
			//sum=sum+(a[i]+a[j]);
		
		if(sum==s)
		{
			printf("%d %d",i,j-1);
			return 1;

		}
		
		if(sum>s || j==size){
		
		break;}
		sum=sum+a[j];
		
		
	}
 }
}
