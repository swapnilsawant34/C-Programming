#include<stdio.h>
//Display table using ponter
void main()
{
	int no,*ptr,i,tab;
	//ptr=&no;
	printf("Enter the number\n");
	scanf("%d",&no);
	ptr=&no;
	i=1;
	while(i<=10)
	{
		tab=*ptr*i;
		i++;
		printf("table=%d\n",tab);
	}
	//printf("I=%d\n",i);
}
