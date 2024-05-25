

#include<stdio.h>  //to find out prime no or not

void main()
{
	int no,i=2,k=0;
	//printf("Enter the number");
	//scanf("%d",&no);
	
	while(i<=50)
	{
		if(no%i==0)
		{
			k=1;
			break;
		}
		i++;
		
	}
	printf("%d\n",i);
}
	

