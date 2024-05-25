#include<stdio.h>
/*
Write a program to create function name as swap(char first[],char second[]) accept two strings as input and perform swapping on both string
Input: Enter first string ABC Enter Second String MNO  
Output:  
Before Swapping First = ABC.
Second=MNO 
After Swapping First=MNO    Second=ABC


*/

char swap(char first[],char second[])
{
	int i=0;
	while(first[i]!='\0')
	{
		char temp=first[i];
		first[i]=second[i];
		second[i]=temp;
		i++;
	}
     
	
	printf("\nAfter swapping:\n");
	printf("String1=%s\t String2=%s",first,second);
}
void main()
{
//	char swap(char,char);
	char first[90],second[90],temp;
	printf("Enter the string1:");
	gets(first);
	
	printf("Enter the string2:");
	gets(second);
	printf("\nBefore swapping:\n");
	printf("String1=%s\t String2=%s",first,second);
	
	swap(first,second);	
}
