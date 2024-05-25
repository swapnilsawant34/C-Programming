//WAP to search substring in given string

#include<stdio.h>
#include<string.h>

void main()
{
	char ch[90],subs[90];
	int i,j,flag=0;
	
	printf("Enter the string:\n");
	gets(ch);
	
	printf("Enter the sub-string:\n");
	gets(subs);
	
	for(i=0;ch[i]!='/0'&&subs[j]!='/0';i++)
	{
		//for(j=0;subs[j]!='\0';j++)
		//{
			if(ch[i]==subs[j])
			{
				
				j++;
				
			//	flag=1;
			//	break;
				//printf("Substring found");
			}
			else
			{
				j=0;
				printf("Substring is not found");

			}
	//		 if(flag)
	  //    {
	    //  printf("Substring found");	
		 // }
		//	else
		//	{
		//		printf("Substring is not found");
		//	}
		}
	}
	     

