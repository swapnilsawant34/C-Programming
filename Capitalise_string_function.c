#include<stdio.h>
/*
Write a program to create function name as void firstLetterCaps(char[]) This function accept string as input and 
convert first letter as capital of every word.
Input:abc mno pqr 
Output: Abc Mno Pqr
*/
char *firstLetterCaps(char str[])
{
		int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(i==0)
		{
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32;
				continue;
			}
		}
		if(str[i]==' ')
		{
			i++;
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32;
				continue;
			}
		}
		else
		{
			if(str[i]>='A' && str[i]<='Z')
			{
				str[i]=str[i]+32;
				continue;
			}
		}
	
	}
		return str;

}
void main()
{	
	char str[90];
	printf("Enter the string:");
	gets(str);
	
	char *ptr=firstLetterCaps(str);
	printf("Capital string:%s",ptr);
}
