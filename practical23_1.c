#include<stdio.h>
#include<string.h>

void main()
{
	char i, name[90];
	
	
	printf("Enter the string:\n");
	gets(name);
	
	
	for(i=0;name[i]!='\0';i++)
	{
	
	printf("%c\n",name[i]);
	
      }
      
}
