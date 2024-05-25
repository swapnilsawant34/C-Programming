	#include<stdio.h>
	#include<stdlib.h>
	void main()
	{
		int n;
		int arr[]={7,10,4,3,20,15};
	
	
	
	
	int k;
	k=4;
//	printf("Enter the Kth smallest value\n");
//	scanf("%d",&k);
	
	n=sizeof(arr)/sizeof(arr[0]);
	
		

	//sort(arr,arr+n);
	//arr[i]=arr[i+n];
	
	printf("Kth smallest element",k,arr[k-1]);
}
