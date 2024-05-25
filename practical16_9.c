#include<stdio.h>

//find unique number in array

void main()
{
int a[10],i,j,size,temp;
     printf("Enter the size of array\n");
     scanf("%d",&size);
	printf("Enter the elements in array\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	
	//sorting in acending
//  printf("\nElements in acending order:\n");
//	for(i=0;i<size;i++)
//	{
//		for(j=(i+1);j<size;j++)
//		{
//			if(a[i]>a[j])
//			{
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//			
//		}
//		printf("%d\t",a[i]);
//	} 
	int count=0;
	printf("\nUnique elements in array\n");
	for(i=0;i<size;i++)
	{     
		for(j=0;j<size;j++)
		{
			
			if(a[i]==a[j] && (i!=j))
			{
				break;
				
			}
		}   
		
			if(j==size)
			{
			count++;
		    printf("%d\t",a[i]);
			
		    }
		
	         
        }
//unique number in array     
     
}
