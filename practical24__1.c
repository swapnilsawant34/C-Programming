#include<stdio.h>
//Find out vowls and coconent in the string
int main()
{
	char ch[90];
	int i;
	int vcount=0,ccount=0;
	printf("Enter the string value\n");
	gets(ch);
	
	
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='A' && ch[i]<='Z')
		{
			ch[i]=ch[i]+32;
		}
		if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' ||ch[i]=='u')
		{
			++vcount;
			
		}
		else if(ch[i]>='a' && ch[i]<='z')
		{
			
			++ccount;
		}
		
			}
			printf("Number of Vowel=%d",vcount);
		printf("Number of conconent=%d",ccount);

	return 0;
}
