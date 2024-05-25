#include<stdio.h>


void main()
{
	
	char ch[90];
	int value,i,sum=0;
	printf("Enter the string:\n");
	gets(ch);
	
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>=48 && ch[i]<=57)
		{
		 //printf("Digit present in the string=%d--->%d\n",ch[i],value);
		 value=(int)ch[i];
		sum=sum+(value-48);
	
	   }
	  
	}

		printf("Sum=%d\n",sum);
}
