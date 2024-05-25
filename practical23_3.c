#include<stdio.h>
#include<stdio.h>
//Number of words in given string.
void main()
{
	
	char name[90],i;
	int count=1;
	
	printf("Enter the String:\n");
	gets(name);
for(i=0;name[i]!='\0';i++){
	
	if(name[i]==' ')
	{
		
		
		//printf("%c",name[i]);
		//name[i]++;
		count++;
		
	}

}
	printf("Number of words in given string is %d",count);	
}
