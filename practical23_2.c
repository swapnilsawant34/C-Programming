#include<stdio.h>
#include<string.h>

void main()
{
	char name[90],i;
	int count=0;
	
	printf("Enter the string value\n");
	gets(name);
	
	for(i=0;name[i]!='\0';i++)
	{
	
	
	printf("%c\n",name[i]);
	
	count++;
	
    }
      printf("Count=%d",count);
}
