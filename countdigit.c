#include<stdio.h>

void main()
{
	
	int no,count=0;
	
	printf("Enter the number");
	scanf("%d",&no);
	
	                        //no=no/10
	                        // count++;
	                        
	   while(no!=0)
	   {
	   	
	   	no=no/10;
	   	count++;
	   	
        }
        
        printf("Number of digit=%d",count);
}

//Note-for logic and stepwise execution refer note book.
