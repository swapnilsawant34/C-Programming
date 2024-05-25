#include<stdio.h>
int maxVal(int []);
int minVal(int []);
void main()
{
	int result;
	int a[]={10,20,30,40,50};
	result=maxVal(a);
	printf("Maximum value is %d",result);
	result=minVal(a);
	printf("\nMinimum value is %d\n",result);
}

int maxVal(int a[])
{
	int max,i;
	max=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	//return max;	
	}
}
int minVal(int a[])
{
	int min,i;
	
	min=a[0];
	for(i=0;i<5;i++)
	{
		//if(a[i]<min)
		if(min>a[i])
		{
			min=a[i];
		
		}
			
	}

	return min;
}
