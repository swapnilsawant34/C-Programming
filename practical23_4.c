#include<stdio.h>
#include<string.h>

void main()
{
	char name[90],k,count=0;
	//char a,e,i,o,u;
	
	printf("Enter the string:\n");
	gets(name);
	
	for(k=0;name[k]!=0;k++)
	{
		if(name[k]=='a')
		{
			count++;
		}
		
		if(name[k]=='e')
		{
			count++;
		}
		
		if(name[k]=='i')
		{
			count++;
		}
		if(name[k]=='o')
		{
			count++;
		}
		if(name[k]=='u')
		{
			count++;
		}
		if(name[k]=='A')
		{
			count++;
		}
		
		if(name[k]=='E')
		{
			count++;
		}
		if(name[k]=='I')
		{
			count++;
		}
		if(name[k]=='O')
		{
			count++;
		}
		if(name[k]=='U')
		{
			count++;
		}
	}
	printf("Count=%d",count);
}
