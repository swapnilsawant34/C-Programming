#include<stdio.h>

int main()
{
	int i=1,no,t;
	
	printf("Enter the number");
	scanf("%d",&no);
	
	while(i<=10)
	{
		t=no*i;
		
		
		printf("Table=%d\n",t);
		
		i++;
	}
	//printf("Table=%d\n",no);
	
	return 0;
}
