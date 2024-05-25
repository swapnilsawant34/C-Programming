#include<stdio.h>
#include<string.h>
int main()
{
	char ch1[90],ch2[90];
	int i,j,k,len;
	printf("Enter the first string:\n");
	gets(ch1);
	
	
//	printf("Enter the second string:\n");
//	gets(ch2);
   len=strlen(ch1);
	
	for(i=0;i<strlen(ch1),ch1[i]!='\0';i++)
	{
		for(j=i+1;ch1[j]!='\0';j++)
		
			if(ch1[j]==ch1[i])
			{
				for(k=j;ch1[k]!='\0';k++)
				{
					ch1[k]=ch1[k+1];
					
				}
				
				
				
			}
	}
			printf("Final string=%s",ch1);
			return 0;
}
