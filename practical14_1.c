#include<stdio.h>
//finding missing elements in an array.
void main()

{
	int a[17],i,j;
;
	
	printf("Enter the five elemnts in an array in acending order\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Missing numbers\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<a[i+1];j++)
		{
			if(j>a[i] && j<a[i+1])
			printf("%d\n",j);
		}
		printf("\n");
	
	}
	
}
