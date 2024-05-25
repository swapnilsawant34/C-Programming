//WAP to print all natural numbers between 1 to n using recursion

#include<stdio.h>
	int no=1;
void main()
{
int naturalno(int);
	
	int n,result,no;
	
	printf("Enter the range for printing natural numbers");
	scanf("%d",&n);
	result=naturalno(n);
	//printf("Natural numbers are:",result);
}

int naturalno(int n)
{
	 
	if(no<=n)
	{
		printf("%d\n",no);
		no++;
	  naturalno(n);  //recursive call
	}

}
