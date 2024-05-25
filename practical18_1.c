#include<stdio.h>

void main()
{
	int findcube(int);
	int no,cube;
	printf("Enter the number \n");
	scanf("%d",&no);
	
	cube=findcube(no);
	
	printf("Cube is %d",cube);
}
int findcube(int n)
{
	return n*n*n;
 } 
