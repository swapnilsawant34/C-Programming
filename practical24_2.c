#include<stdio.h>
#include<string.h>
void main()
{
	char temp,ch1[90],ch2[90];
	int mid,end,len,cpy,i,flag=0;
	printf("Enter the string\n");
	gets(ch1);
	
	
	len=strlen(ch1);
	
	cpy=strcpy(ch2,ch1);
	
	mid=(len/2);
	end=(len-1);
	
	for(i=0;i<mid;i++)
	{
		temp=ch1[i];
		ch1[i]=ch1[end];
		ch1[end]=temp;
		end--;
		
	}
		for( i=0;ch1[i]!='\0';i++)
		{
			if(ch1[i]!=ch2[i])
			{
				flag=1;
				break;
			}
		}
	if(flag)	
	{
		printf("String is not palindrome");
	}
	else
	{
		printf("String is   palindrome");
	}
}
