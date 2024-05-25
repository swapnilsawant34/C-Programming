#include<stdio.h>
#include<string.h>

//Ocurance of character in given string
void main()
{
	char ch[90];
	int i,count,j,temp;
	
	
	printf("Enter the string\n");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++)
	{
		
		for(j=(i+1);ch[j]!='\0';j++)          //Acending order
		{
			
			if(ch[i]>ch[j])
			{
				temp=ch[i];
				ch[i]=ch[j];
				ch[j]=temp;
				
			}
		//printf("%c",ch[i]);
	
		
	    }
      }

for(i=0;ch[i]!='\0';i++)
{
	if(ch[i]==ch[i+1])          //count the characters
	{
		count++;
	}
	else
	{
	
      printf("Occurance:%c---->%d\n",ch[i],count);
      count=1;     //take the count always 1.
     }
}
}
