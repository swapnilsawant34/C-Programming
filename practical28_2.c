#include<stdio.h>
#include<string.h>
struct FoodInfo
{
	int foodId;
	char foodName[90];
	int foodPrice;
};
struct FoodInfo f[5];

void main()
{
	int choice,i,j,quant,tbill;
	char fname;
	
	
		for(i=0;i<5;i++)
	{
	
	printf("Enter the food id food name and food price:\n");
	scanf("%d %s %d",&f[i].foodId,&f[i].foodName,&f[i].foodPrice);
     }
	printf("Enter the choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
	
	case 1:
		for(i=0;i<5;i++)
		{
			printf("%d %s %d",f[i].foodId,f[i].foodName,f[i].foodPrice);
		}
		break;
		
	case 2:
	    	for(i=0;i<5;i++)
			{
				for(j=(i+1);j<5;j++)
				{
					if(f[i].foodPrice>f[j].foodPrice)
					{
						struct FoodInfo temp=f[i];
         			       f[i]=f[j];
         			       f[j]=temp;
					}
				}
				
			}
			printf("Sorting record by decending order:\n");
		 	for(i=0;i<5;i++){
	
	printf("%d\t%s\t%d",f[i].foodId,f[i].foodName,f[i].foodPrice);
         }
		 break;
		 
	case 3:
		//for(i=0;i<5;i++)
		//{
		//	printf("Enter the Quantity %s",f[i].foodName);
		//	scanf("%d",&quant);
		//	tbill=tbill+(quant*f[i].foodPrice);
		//}
		//printf("Total=%d",tbill);
		
		//printf("Enter the food name:\n");
	
	//gets(fname);
	//scanf("%s",&fname);
	//	printf("Enter the Quntity to purchase:\n");
	//	scanf("%d",&quant);	
		
		for(i=0;i<5;i++)
		{
			printf("Enter the food name:\n");
	
	//gets(fname);
	scanf("%s",&fname);
		printf("Enter the Quntity to purchase:\n");
		scanf("%d",&quant);	
			if(strcmp(fname,f[i].foodName)==0){
			
			
			      tbill=f[i].foodPrice * quant;
			      	
			  }
		}
	printf("Total bill=%d",tbill);
		break;
		default:
			printf("Invalid choice");

		 	
}
}

