//WAP to input the number and check number present in fibonacci series or not using recursion.

#include<stdio.h>
int f1=0,f2=1;
void main()
{
	int fibo(int,int);
	int no,svalue,result;
	
	printf("Enter the number\n");
	scanf("%d",&no);
	
	printf("Enter the value for serchhing\n");
	scanf("%d",&svalue);
	
	result=fibo(no,svalue);
	
	if(no==svalue)
	{
		printf("number present in fibonacii\n");
	}
	else if(result)
	{
		printf("number is present in fibbonacii\n");
	}
	else
	{
	    printf("number is not present in fibbonacii\n");	
	}
}

int fibo(int no,int svalue)
{
	int fb;
	
	if(no!=0)
	{
		fb=f1+f2;
		
		if(fb==svalue)
		{
			f1=f2;
			f2=fb;
			fibo(--no,svalue);
		}
	}
	else
	{
		return 0;
	}
}
