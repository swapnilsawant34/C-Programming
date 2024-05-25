#include<stdio.h>

void main()
{
	int sn,i,j,en,count=0;
	
	scanf("%d %d",&sn,&en);
	
	for(j=en;j<=en;j++)
	{
		i=1;
		while(i<=j)
		{
			if(j%i==0){
				count++;
			}
			i++;
		}
		if(count==2)
		{
			printf("%d  ",j);
		}
		count=0;
	}
}
