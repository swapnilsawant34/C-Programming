#include<stdio.h>
#include<string.h>
//reverse word.
void main()
{
	char name[90];
	int i,j;
	printf("Enter the string:\n");
	gets(name);
	
	int len=strlen(name);
	
	for(i=0,j=0;name[i]!='\0';i++)
	{
		if(name[i]==' ')
		{
			reversedword(name,j,i);
			j=(i+1);
			
			
		}
		if((len-1)==i)
		{
			reversedword(name,j,(i+1));
		}
}
		printf("\nAfter the reverse words %s",name);
	
}
	void reversedword(char name[],int start,int end)
	{
		int i;
		int mid=((end-start)/2);
		end=end-1;
		for( i=0;i<mid;i++)
		{
			char temp=name[start];
			    name[start]=name[end];
			    name[end]=temp;
			    end--;
			    start++;
		}
	}

