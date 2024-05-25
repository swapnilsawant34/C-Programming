#include<stdio.h>

void main(){
	
	float a,b,c,x;
	
	printf("Enter the values of a,b,c");
	scanf("%f %f %f",&a,&b,&c);
	
	x=(a+b)*c*(a-b)/5;
	
	printf("x=%f",x);
}
