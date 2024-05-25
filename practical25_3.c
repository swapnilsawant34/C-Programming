#include<stdio.h>
//WAP to remove all the common alphabets from string 2.
void main()
{
	char ch[90],ch1[90];
	int i,j,count;
	
	printf("Enter the first string\n");
	gets(ch);  //Programming
	
	printf("Enter the second string\n");
	gets(ch1);  //Computers
	
	for(i=0;ch1[i]!='\0';i++)
	{
		count=0;
		 for(j=0;ch[j]!='\0';j++)
		 {
		 	if(ch1[i]==ch[j])
		 	{
		 		count++;
		 		
			 }
		 }
		 
			 if(count==0)
			 {
			 	printf("%c",ch1[i]);   //cutes
			 }
	}
}
