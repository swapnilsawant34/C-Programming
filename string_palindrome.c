#include <stdio.h>
#include <string.h>
int main(){
    char s1[20];
    int i, length,count=1;
    int flag = 0;
    
    printf("Enter a string:");
    //scanf("%s", string1);
    gets(s1);
    //length = strlen(string1);
    while(s1[count]!='\0')   //find the length(without strlen)
	{
		count++;
	}
    for(i=0;i < count ;i++)
	{
        if(s1[i] != s1[count-i-1])
		{
            flag = 1;
            break;
           }
        }
    
    if (flag) {
        printf("%s is not a palindrome",s1);
    }    
    else {
        printf("%s is a palindrome",s1);
    }
    return 0;
}
		
