#include<stdio.h>
#include<string.h>
struct Library
{
	int id;
	char book_name[90];
	char auther_name[90];
	int price;
 };
 
 struct Library member[5];
 
 void main()
 {
 	int i,choice,sid,j;
 		
 		int flag=0;
 		int max;
 		char bookauther[90];
 	for(i=0;i<5;i++)
 	{
 		printf("Enter the member id,book name,auther name and price:\n");
 		scanf("%d %c %c %d",&member[i].id,&member[i].book_name,&member[i].auther_name,&member[i].price);
	 }
	 
	 printf("Enter the choice\n:");
	 scanf("%d",&choice);
	 
	 switch(choice)
	 {
	 	case 1:
	 		printf("Display the all records of the books:\n");
	     for(i=0;i<5;i++)
 	     {
 		printf("%d %s %s %d",member[i].id,member[i].book_name,member[i].auther_name,member[i].price);
 		
	         }
	 break;
	 case 2:
	 
	 	printf("Enter the book id to search\n");
	 	scanf("%d",&sid);
	 	
	 	for(i=0;i<5;i++)
 	     {
 	     	if(sid==member[i].id)
 	     	{
 	     			printf("%d %s %s %d",member[i].id,member[i].book_name,member[i].auther_name,member[i].price);
 	     	
			  }		
	 }
	 break;
	 
	 case 3:
	 
	 	printf("Enter the book auther to search\n");
	 	scanf("%s",&bookauther);
	 	//gets(bookauther);
	 	for(i=0;i<5;i++)
 	     {
 	     	//for(j=0;j<5;j++)
 	     	//{
			  
 	     //	if(bookauther==member[i].auther_name)
 	     	if(strcmp(bookauther,member[i].auther_name)==0)
 	     	{
 	     			printf("%d %s %s %d",member[i].id,member[i].book_name,member[i].auther_name,member[i].price);
 	     	}	
	 }
//}
	 break;
	 
	 case 4:
	 	
	 	  max=member[0].price;
	 for(i=0;i<5;i++)
	 {
	 	if(member[i].price>max)
	 	{
	 		max=member[i].price;
	 	//	printf("%d %s %s %d",member[i].id,member[i].book_name,member[i].auther_name,max);
	 		

		 }
		 
	 }
	 	for(i=0;i<5;i++)
			{
			if(max==member[i].price)
			{
			
			printf("%d %s %s %d",member[i].id,member[i].book_name,member[i].auther_name,member[i].price);
		     }
			}
			
	break;
	
  }
}
