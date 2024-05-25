#include<stdio.h>
int findSqure(int);
int findCube(int);
int findMultiplication(int);
int count=0;
void main()
{
	int no,ch,result;
	printf("Enter the number\n");
	scanf("%d",&no);
	
	printf("Enter the choice\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			result=findSqure(no);
			printf("Squre=%d",result);
			break;
			
			case 2:
				findCube(no);
				break;
			
			case 3:
			  findMultiplication(no);
			 break;	
	}
	
}

int findSqure(int no)
{
	int squre;
	if(no!=0)
	{
		int square;
		squre=no*no;
		printf("Squre=%d",square);
		findSqure(no);
	}
	
}


int findCube(int no)
{
	int cube;
	if(no!=0)
	{
		cube=no*no*no;
		printf("Cube=%d",cube);
		findCube(no);
	}
	
	
}

int findMultiplication(int no)
{
	int table;
	if(count!=10)
	{
		count++;
		//table=count*no;
		printf("Table=%d\n",count*no);
		findMultiplication(no);
	}
	
}
