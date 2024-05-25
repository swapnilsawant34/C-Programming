//Write a C program to find reverse of a string
//wap to design your own function and reverse the function return the string form after reverse.
#include<stdio.h>
#include<string.h>
int main ()
{
	char ch [100],ch1[100];
	int temp,mid,end,count,i,flag=0;
	printf("Enter the string:\n");
	gets(ch);
	while(ch[count]!='\0')   //find the length(without strlen)
	{
		count++;
	}
	for(i=0;i<count;i++)  //copy string 1 to 2(without strcpy)
	{
		ch1[i]=ch[i];
	}
	mid=count/2;            // reverse string(without strrev)
	end=count-1;
	for(i=0;i<mid;i++)
	{
		temp=ch[i];       //
		ch[i]=ch[end];
		ch[end]=temp;
		end--;
	}
	if(ch[i]==ch1[i])         //string compare(without strcmp)
	{
		flag=1;
		break;
	}
	
	if(flag)
	{
		printf("String is palindrome",ch1);
	}
	else 
	{
		printf("string Not pallindrome",ch1);
	}

 return 0;
}
