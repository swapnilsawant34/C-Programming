#include<stdio.h>
//Find letters which are repeted more number of time.
void main()
{
	char ch[90];
	int i,j,temp;
	
	printf("Enter the string:\n");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++)
	{
		for(j=(i+1);ch[j]!='\0';j++)
		{
			if(ch[i]>ch[j])
			{
				temp=ch[i];
				ch[i]=ch[j];
				ch[j]=temp;
				
			}
		}
	}
	int count=1;
	for(i=0;ch[i]!='\0';i++)
  {
	if(ch[i]==ch[i+1])
	{
		count++;
	 }
	 else
	 {
	 	printf("letters in string:%c---->%d\n",ch[i],count);
	 	count=1;
	  } 
  }
}
