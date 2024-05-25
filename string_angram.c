#include<stdio.h>
#include<string.h>

int main()
{
	char s1[50],s2[50];
	int len1,len2,flag1=0,flag2=0,i,j;
	
	printf("Enter the first string\n");
	gets(s1);
	
	printf("Enter the second string\n");
	gets(s2);
	
	len1=strlen(s1);
	len2=strlen(s2);
	
	if(len1==len2)
	{
		for(i=0;i<len1;i++)
		{
			flag1=0;
			for(j=0;j<len2;j++)
			{
				if((s1[i]==s2[j]))
				
				{
					flag1=0;
					break;
				}
			}
			if(flag1==0)
		{
			flag2=1;
			break;
		}
		}
		
	}

	return 0;
}
