#include<stdio.h>
#include<string.h>

void main()
{
	char name1[90];
	char name2[90];
	int i,flag=0;
	
	printf("Enter the first string:\n");
	gets(name1);
	
	
	printf("Enter the second string:\n");
	gets(name1);
	
	int flen=strlen(name1);
	int slen=strlen(name2);
	
	if(flen==slen)
	{
		int count=0;
		while(name1[count]!='\0')
		{
			int diff=name1[count]-name2[count];
			if(diff!=0)
			{
			//	flag=name1[count]-name2[count];
				flag=0;
				
				
			}
			count++;
		
	    }
	    
	   }
	
		    if(flag){
			
			 printf("String is  equal\n");
		      }
			else
		     {
			printf("String is not equal");
		     		
           }
 }

