#include<stdio.h>
void main()
{
	char str1[90],str2[90],temp;
	printf("Enter the string1:");
	gets(str1);
	
	printf("Enter the string2:");
	gets(str2);
	printf("\nBefore swapping:\n");
	printf("String1=%s\t String2=%s",str1,str2);
	int i=0;
	while(str1[i]!='\0')
	{
		temp=str1[i];
		str1[i]=str2[i];
		str2[i]=temp;
		i++;
	}
     
	
	printf("\nAfter swapping:\n");
	printf("String1=%s\t String2=%s",str1,str2);
	
}
