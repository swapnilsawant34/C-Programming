#include<stdio.h>
#include<string.h>
//Number of whites spaces in given sentence
void main()
{
	char ch[90];
	int i,count=0;
	
	printf("Enter the string:\n");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]==' ')
		{
			count++;
		}
		
	}
	printf("Number of whites spaces in the sentences=%d",count);
	
}
