#include<stdio.h>
#include<string.h>
void main()
{
	char first[90],second[90];
	
	printf("Enter the first string:\n");
	gets(first);
	
	printf("Enter the second string:\n");
	gets(second);
	
	int result=stringcompare(first,second);
	
	if(result==0)
	{
		printf("String are equal");
	}
	else
	{
		printf("String are not equal");
	}
	
}


int stringcompare(char first[],char second[])
{
	int flen=strlen(first);
	int slen=strlen(second);
	
	if(flen==slen)
	{
		int flag=0,count=0;
		while(first[count]!='\0')
		{
			if(first[count]-second[count]!='\0')
			{
				flag=first[count]-second[count];
				break;
				
			}
			count++;
		}
		return flag;
		
	}
	else
		{
			return flen-slen;
		}
}
