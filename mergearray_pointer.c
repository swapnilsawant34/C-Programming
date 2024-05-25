#include<stdio.h>

void main()
{
	int a[5],b[5],c[10],i,*ptr1,*ptr2,*ptr3,k;
	ptr1=&a[i];
	ptr2=&b[i];
	ptr3=&c[i];
	
	printf("Enter the 1st array elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the 2nd array element:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<3;i++)
	{
		*ptr3=*ptr1;
		//c[i]=a[i];
	}	
	for(k=5,i=0;i<5;i++)
	{
		*ptr3=*ptr2;
		//c[k]=b[i];
		k++;
			
	}
	
	ptr1=a;
	ptr2=b;
		printf("\nDisplay the array after merging\n");
	for(i=0;i<6;i++)
	{
		printf("%d\t",c[i]);
	}
	
		//ptr3=&c[0];
		
	printf("Display array Elements\n");
	for(i=0;i<10;i++)
	{
			//*(p+j) = *(q+i); 
			*(ptr1+5)=*(ptr2+i);
		//printf("%u--->%d\n",ptr3,*ptr3);
		//++ptr3;
		printf("%d\t",c[i]);
		ptr3++;
	}
	

	
}
