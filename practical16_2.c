#include<stdio.h>
//Number is present or not

void main()
{
	int a[5],i,flag=0;
	
	printf("Enter the array element:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	int no;
	printf("Enter the number to serch in array\n");
	scanf("%d",&no);
	for(i=0;i<5;i++)
	{
		if(a[i]==no)
		{
			flag=1;
			break;
		
		}
     }
     if(flag)
     {
     	printf("number is present");

	  }
		else
		{
			printf("number is not present");
			
		}
	
}
