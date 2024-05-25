	#include<stdio.h>
	void main()
	{
	
	int a[6],i,j,sum;
	
	printf("Enter the given sum:\n");
	scanf("%d",&sum);
	printf("Enter the array element:\n");
	for(i=0;i<6;i++)
	{
		
		scanf("%d",&a[i]);
	}
	printf("Display the Array\n");
	for(i=0;i<6;i++);
	{
		printf("%d",a[i]);
	}
	printf("Pair of element:\n");
	for(i=0;i<6;i++)
	{
		for(j=i;j<6;j++)
		{
			if(a[i]+a[j]==sum)
			{
				printf("%d %d\n",a[i],a[j]);
			}
		}
	}
	
}
