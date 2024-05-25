#include<stdio.h>
#include<string.h>

void main()
{
	
	char ch[90];
	int i;
	printf("Enter the string:\n");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++)
	{
		
		printf("%c---->%d\n",ch[i],ch[i]);
		
	}
	
}
