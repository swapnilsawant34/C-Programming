#include<stdio.h>
int power(int,int);
void main()
{
	int base,index,p,result;
	
	printf("Enter the base");    //taking base and index from the users
	scanf("%d",&base);
	printf("Enter the index\n");
	scanf("%d",&index);
	
	result=power(base,index);   //function calling
	printf("Power of number=%d",result);
}

int power(int base,int index)       //function defination
{                                    //base and index passing through the power function
	int i,p=1;
	for(i=1;i<=index;i++)          //i gets compare with index
	{
		p=p*base;                //calculate power using base and result will stored in power 
	}
	
	return p;          //pwer return to calling function and result will print
}


