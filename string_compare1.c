#include<stdio.h>
#include<string.h>
void main()
{
	char first[90],second[90];
		int count=0,flag=1;
	printf("Enter the first string:\n");
	gets(first);
	
	printf("Enter the second string:\n");
	gets(second);
	
    int flen=strlen(first);
    int slen=strlen(second);
      
    if(flen==slen)
    {
    	while(first[count]!='\0')
    	{
    		int diff=first[count]-second[count];
    		if(diff!=0)
    		{
    			flag=0;
    			break;
			}
			++count;
		}
    	if(flag)
    	{
    		printf("equal");
		}
		else
		{
			printf("not equal");
		}    	
	}	
}
