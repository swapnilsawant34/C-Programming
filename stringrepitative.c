#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *findrepetative(char ch[])
{
	 int i,j, count=1;
	 char temp;
	int len;
	 len=strlen(ch);

	for( i=0;i<len;i++)
	{
		for(j=(j+1);j<len;j++)
		{
			if(ch[i]>ch[j])
			{
				temp=ch[i];
				ch[i]=ch[j];
				ch[j]=temp;
				
			}
			
		
			
		}

		
			
		return ch;
	}
			
}

void main()
{
	
	char ch[90],*ptr;
	
	printf("Enter the string\n");
	gets(ch);
	printf("Before the sorting=%s",ch);
	
	
	*ptr=findrepetative(ch);
	
	printf("After the sorting=%s",ch);
	
}
	

