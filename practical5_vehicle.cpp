#include<stdio.h>
int main()
{
	int v,w,tw,fw,a;
	
	printf("Enter the value of v");
	scanf("%d",&v);
	
	printf("Enter the total no.of wheels");
	scanf("%d",&w);
	
	a=w/2;
	fw=a-v;
	tw=v-fw;
	
	if(2<=w && w%2==0 && v<w)
	{
		printf("TW=%d",tw);
		printf("FW=%d",fw);
	}
	
	else
	{
		printf("Invalid Input");
	}
	return 0;
}
