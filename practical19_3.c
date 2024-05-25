//WAP tp find sum of all natural numbers between 1 to n using recursion

#include<stdio.h>
	int no=1,sum=0;
void main()
{
int naturalno(int);
	
	int n,result,no;
	
	printf("Enter the range for printing natural numbers");
	scanf("%d",&n);
	naturalno(n);
	printf("Sum=%d",sum);
	
}

int naturalno(int n)
{
	 
	if(no<=n)
	{
		printf("%d\n",no);
		
		sum=sum+no;
		no++;

	  naturalno(n);  //recursive call
	
	}
	//printf("Sum=%d",sum);
	

}
