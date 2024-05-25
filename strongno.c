#include<stdio.h>

void main()
{


int no,rem,sum=0,i;

printf("Enter the number ");
scanf("%d",&no);
int temp=no;
	while(no)
	{
		i=1;
    	int f=1;
		
		rem=no%10;
		//no=no/10;         //seprate number
		
		while(i<=rem)
    {
    	
    	f=f*i;
    	i++;
	
	
      }
      //while(no)
      
	  
		sum=sum+f;
		no=no/10;
		
	
      }
	if(sum==temp)
		{
			printf("%d is Strong number",temp);
		}
		else
		{
			printf("%d is Not strong number",temp);
		}
	
	
}
