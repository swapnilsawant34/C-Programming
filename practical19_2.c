//WAP to print all even or odd numbers in given range using recusion.

#include<stdio.h>
int no=1;
void main()
{
	
	int EvenOrOdd(int);
	int n;
	
	printf("Enter the range:\n");
	scanf("%d",&n);
	
	EvenOrOdd(n);
	
	
}

int EvenOrOdd(int range)
{
	
	if(range!=0)
	{
	
	   if(no%2==0)
	   {
		printf("Even number are:%d\n",no);
	
	   }
	   else
	   {
		
		    printf("Odd number are:%d\n",no);		
	    }
	    range--;
	 no++;
	 EvenOrOdd(range);
   }
	
	
}
