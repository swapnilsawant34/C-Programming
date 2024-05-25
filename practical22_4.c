#include<stdio.h>

int Encryptednumber(int [],int);
int Decreptednumber(int [],int);
void main()
{
	int key,i;
	int a[5]={10,20,30,40,50};
	
	//printf("Enter the key");
	//scanf("%d",&key);
	key=2;
	 int Encryptednumber(a,key);
	 
	 //for( i=0;i<5;i++)
	 //{
	 //	printf("%d\t",a[i]);
	 //}
	 
	 
	 //int Decreptednumber(a);
}

int Encryptednumber(int a[],int key)
{
	int i;
	for(i=0;i<5;i++)
	
	        a[i]*=key;
	        a[i]++;
	
	for(i=0;i<5;i++)
	
	      printf("%d\t",a[i]);
	
	return (a,key);

}

//int Decreptednumber(int a[],int key)
//{
//	int i;
//	for(i=0;i<5;i++){
	
	//int Decrepted,i;
	//Decrepted=a[i]-key;
//	a[i]/=key;
	//printf("Decrepted %d\t",Decrepted);
	//printf("%d\t",a[i]);
  //}	//return a[i];
//}


