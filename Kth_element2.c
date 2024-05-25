#include<stdio.h>
#include<stdlib.h>
int tofindsmallest(int arr[],int n,int k)
{
	int sort(arr,arr[]+n);
	
	return arr[k-1];
}

void main()
{
	int n;
	int arr[]={7,10,4,3,20,15};
	
	n=sizeof(arr)/sizeof(arr[0]);
	int k=2;
	int result=tofindsmallest(arr,n,k);
	printf("Kth smallest element is",result);
}
