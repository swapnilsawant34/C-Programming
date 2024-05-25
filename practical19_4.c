//WAP to find sum of all even or odd numbers in given range using recursion.
#include<stdio.h>
int no=1,sum=0,sum1=0;
void main()
{
	
	int EvenOrOdd(int);
	int n;
	
	printf("Enter the range:\n");
	scanf("%d",&n);
	
	EvenOrOdd(n);
	 printf("Sum of even numbers=%d\n",sum);
    printf("Sum of odd numbers=%d\n",sum1);
	
}

int EvenOrOdd(int range)
{
	
	if(range!=0)
	{
	
	   if(no%2==0)
	   {
		printf("Even number are:%d\n",no);
		sum=sum+no;
		//printf("Sum of even numbers=%d\n",sum);
	
	   }
	   	
	   	
	   else
	   {
		
		    printf("Odd number are:%d\n",no);
				sum1=sum1+no;
		//      printf("Sum of odd numbers=%d\n",sum1);		
	    }
	    
	    	
	    range--;
	 no++;
 EvenOrOdd(range);
   }
   //printf("Sum of even numbers=%d\n",sum);
    //printf("Sum of odd numbers=%d\n",sum1);
	
}
