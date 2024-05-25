#include<stdio.h>
int i;
int ch,a[10],size,result,index,svalue;
int displayarray(int);
int searchIndex(int);
int searchValue(int);
int searchElement(int,int);
int addStart(int,int);
int addLast(int,int);
int deleteElement(int);
int deleteStart(int);
int deleteEnd(int);
void main()
{
	//int ch,a[10],size;
	int no;
	printf("Enter the choice:\n");
	scanf("%d",&ch);
	printf("Enter the size of array:\n");
	scanf("%d",&size);
		//printf("Enter the index\n");
	    //scanf("%d",&index);
	printf("Enter the array elments:\n");
		for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	
switch(ch)
{
  	case 1:
  	displayarray(i);
  	printf("\nShow all array element\n");
	break;
	
	case 2:
		result=searchIndex(index);
		//printf("Enter the index\n");
	   //scanf("%d",&index);
		printf("Search specific value by index %d\n",result);
		break;
		
	case 3:
	result=searchValue(svalue);
		printf("Search specific value by value\n");
	    break;
	    
	case 4:
		addElement(index,no);
		break;
		
	case 5:
	   addStart(index,no);
	   
	   break;	
	
	case 6:
	    addLast(index,no);	
	    //printf("Enter the index to insert in array element\n");
	   //scanf("%d",&index);
	   break;
	   
	case 7:
	      deleteElement(index);
		  break;
		  
		  
	case 8:
	    deleteStart(index);
		break;	  
	
	
	case 9:
	   deleteEnd(index);
	   break;	  
		     
    }	 
}

int displayarray(int i)
{
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
	return i;
}

int searchIndex(int index)
{
	
	printf("Enter the index\n");
	scanf("%d",&index);
	//for(index=0;index<=size;index++)
	//{    
       //if(index==index)
       //if(a[i]==index)
		 //printf("%d",a[index]);
		//scanf("%d",&a[index]);
		 // printf("%d",a[i]);
		  //scanf("%d",a[i]);
		  //return index;
		  	//for(i=index;i<9;i++)
		  	for(index=0;index<=size;index++)
	{
		a[i]=index;
		printf("%d",a[i]);
		//return index;
	}
	}
	
 //} 
 
 int searchValue(int svalue)
 {
 	printf("Enter the serch value in array\n");
 	scanf("%d",&svalue);
 	for(i=0;i<=size;i++)
 	{
 		if(svalue==a[i])
 		{
 			printf("Value found\n");
		}
		else{
			printf("Value in array not found");
		}
		return svalue;
	 }
 }
 
 int addElement(int index,int no)
 {
 	printf("Enter the index to insert in array element\n");
	scanf("%d",&index);
   printf("Enter the element to insert element\n");
	scanf("%d",&no);
	for(i=size;i>=index;i--)
	{
			a[i+1]=a[i];
		
	}
	a[index]=no;
	for(i=0;i<size;i++)        //or for(i=0;i<size+1;i++)
	{
			printf("a[%d]--->%d\n",i,a[i]);
	}
	
 }
 
  int addStart(int index,int no)
 {      index=0;
 //	printf("Enter the index to insert in array element\n");
//	scanf("%d",&index);
   printf("Enter the element to insert element\n");
	scanf("%d",&no);
	for(i=0;i=index;i--)
	{
			a[i+1]=a[i];
		
	}
	a[index]=no;
	for(i=0;i<size;i++)        
	{
			printf("a[%d]--->%d\n",i,a[i]);
	}
	
 }
 
 int addLast(int index,int no)
 {
 	index=size;
 	printf("Enter the elemnet to insert element\n");
 	scanf("%d",&no);
 	
 	for(i=size;i>=index;i++)
 	{
 		a[i+1]=a[i];
 		
	}
	a[index]=no;
	for(i=0;i<size;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
 }
 
 int deleteElement(int index)
 {
 	printf("Enter the index to delete from array");
	scanf("%d",&index);
	for(i=index;i<size;i++)
	{
		a[i]=a[i+1];
				
	}
	
	for(i=0;i<size;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
 }
 
 
 int deleteStart(int index)
 {
 	index=0;
 	//printf("Enter the index to delete from array");
	//scanf("%d",&index);
	for(i=index;i<size;i++)
	{
		a[i]=a[i+1];
				
	}
	
	for(i=0;i<size;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
 }
 
 
 int deleteEnd(int index)
 {
 	index=size-1;
 	//printf("Enter the index to delete from array");
	//scanf("%d",&index);
	for(i=index;i<size;i++)
	{
		a[i]=a[i+1];
				
	}
	
	for(i=0;i<size;i++)
	{
		printf("a[%d]--->%d\n",i,a[i]);
	}
 }
