#include<stdio.h>

int allAlphabet(char);
int ascciichar(char);
void main()
{
	
	
	char ch,result;
	int choice;
	
	printf("Enter the choice \n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			result=allAlphabet(ch);
			printf("%c\n",result);
			break;
			
		case 2:
		    ascciichar(ch);
			break;	
	}
	
}

int allAlphabet(char ch)
{
	//if((ch<'A' || ch>'Z') && (ch<'a' || ch>'z'))
	//if(ch='a' && ch<='z')
	//if(ch<'A' ||
//	if((ch<'A' || ch>'Z') && (ch<'a' || ch>'z')) 
//if((ch>='a' && ch<'z') || (ch>='A' && ch<'Z'))
//if((ch>='a' && ch<'z') && (ch>='A' && ch<'Z'))
	if(ch>='z')
	{
		
		
	return;	//ch='A';
	}
	 
	printf("%c\n",ch++);

    allAlphabet (ch);
	
}

int ascciichar(char ch)
{
	if(ch>=255)
	{
		return;
	}
	printf("%c\n",ch++);
	ascciichar (ch);
}


	

