#include<stdio.h>
int sortArray(int *);
int a[]={30,20,10,40,70};
void main()
{
	int result;
//	int a[]={10,20,30,40,50};
	
	sortArray(a);
	
}

int sortArray(int *ptr)
{
	int i,j,temp;
	for(i=0;i<5;i++)
	{
		for(j=(i+1);j<5;j++)
		{
			if(*ptr<a[j])
			{
				temp=*ptr;
				*ptr=a[j];
				a[j]=temp;
				
			}
		
		}
		ptr++;
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
}


