#include<stdio.h>
#include<string.h>

void main()
{
	char name[90],i;
	int count=0;
	
	printf("Enter the string:\n");
	gets(name);
	
	for(i=0;name[i]!='\0';i++)
	{
		if((name[i]!='a') && (name[i]!='e') && (name[i]!='o') && (name[i]!='i') && (name[i]!='u') && (name[i]!='A') && (name[i]!='E') && (name[i]!='O') && (name[i]!='I') && (name[i]!='U'))
		{
			count++;
		}
	}
	printf("Count=%d",count);
}
