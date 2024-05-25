#include<stdio.h>

void main()
{
	int i,size,a[10];
	
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter the array elements:\n");
	
	for(i=0;i<size;i++)
	{
		scanf("%d\\t",&a[i]);
		
	}
	printf("Display the array value:\n");
	
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);    //display the given array
		
	}
     	int max=a[0];        //for maximum and minimum initialize from a[0] i.e 0th location
     	int min=a[0];
	for(i=0;i<size;i++)
	{
		
		
		if(a[i]<max)                   //inside if a[i] gets compared with max
		{
			max=a[i];                  //a[i] and max value will be matched then print maximum number
		}
			if(a[i]>min)                 //a[i] and min value will be matched then print minmum number
			{
				min=a[i];          
			
			}
          	
			
	}
	  
	  printf("Minimum number in array is %d\t",max);
	  printf("Maximum number in array is %d\t",min);		
			
	}


	

	

