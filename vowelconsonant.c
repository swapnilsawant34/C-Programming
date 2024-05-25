#include<stdio.h>

void main()
{
	char ch;
	printf("Enter the charater from keyboard");
	scanf("%c",&ch);
	
	
	if(ch>='A' && ch<='Z'){
			ch=ch+32;
			
		}
		
	
	switch(ch)
	{
		
		
		
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':{
			
			printf("Vowel");
			break;
		}
		default:
			if(ch>='a' && ch<='z')
			{
				printf("Consonant");
			}
			else
			{
				printf("No cosonant No vowel");
			}
			
			
			
	}
}
