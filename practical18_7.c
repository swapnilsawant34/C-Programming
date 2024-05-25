#include<stdio.h>

void main()
{
	int strongno(int);
	
	int n;
	printf("Enter the range/interval\n");
	scanf("%d",&n);
	
	strongno(n);
}

int strongno(int n)
{
	int i,no,temp,rem;
	
	printf("Strong numbers are:\n");

	for(i=2;i<=n;i++){
	no=i;int sum=0;
	while(no!=0)
	{
		i=1;
    	int f=1;
		
		rem=no%10;
		
	//while(i<=rem)
    //{
    //	
    //	f=f*i;
   	//i++;
	
     //}
     int j;
     
     while(j<=rem)
    {
    	
    	f=f*j;
   	j++;
	
    }
     
      sum=sum+f;
	 no=no/10;
		
	
    }

    if(sum==i)
    {
    	printf("%d\n",i);
	}
}
}

