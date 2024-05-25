//count>size/2
#include<stdio.h>
//Majority of Elements in array.
void main()
{
	int a[10],i,j,size,flag=0;
	
	printf("Enter the size of array\n");
	
	scanf("%d",&size);
	printf("Enter the array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int count=0;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
			
			//if(count>=5)
			if(count>size/2)
			{
				flag=1;
				break;
			}
			
		}
		if(flag)
			{
				printf("Majority Element found");
				break;
				
			}
			else
			{
				printf("There are no Majority Elements in given array");
				break;
			}
	
	}
		
	
}
