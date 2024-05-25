#include<stdio.h>
#include<string.h>

void main()
{
	char ch1[90],ch2[90];
	int i,flag=0,j;
	printf("Enter the first string\n");
	gets(ch1);
	
	
	printf("Enter the second string\n");
	gets(ch2);
	
	//strcpy(ch2,ch1);
	for(i=0;ch1[i]!='\0';i++)
	{
		for(j=0;ch2[j]!='\0';j++)
		
		if(ch1[i]==ch2[j])
		{
			flag=1;
			break;
			//printf("String is anagram");
		}
		
				
	}
	    if(flag)
		{
			printf("String is anagram");
		}
		else
		{
			printf("String is not anagram");
		}
	

		
}
