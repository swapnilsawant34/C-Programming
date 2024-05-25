#include<stdio.h>

struct Student
{
	int sid;
	int smarks;
	char sname[90];
};

struct Student s[5];

void main()
{
	int choice,i,j,max,min;
	
	for(i=0;i<5;i++)
	{
	
	printf("Enter the student id student name and student marks:\n");
	scanf("%d %s %d",&s[i].sid,&s[i].sname,&s[i].smarks);
     }
	printf("Enter the choice:\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i=0;i<5;i++)
			{
				printf("%d\t%s\t%d",s[i].sid,s[i].sname,s[i].smarks);
			}
			break;
			
		case 2:
			for(i=0;i<5;i++)
			{
				for(j=(i+1);j<5;j++)
				{
					if(s[i].smarks<s[j].smarks)
					{
						struct Student temp=s[i];
         			       s[i]=s[j];
         			       s[j]=temp;
					}
				}
				
			}
			printf("Sorting record by decending order:\n");
		 	for(i=0;i<5;i++){
	
	printf("%d %s %d\n",s[i].sid,s[i].sname,s[i].smarks);
         }
		 break; 
			
		case 3:
			max=s[0].smarks;
			
			for(i=0;i<5;i++)
			{
				if(s[i].smarks>max)
				{
					max=s[i].smarks;
					//printf("%d %s %d",s[i].sid,s[i].sname,s[i].smarks);
					
					//printf("Maximum marks=%d",max);
				}
		
			}
			
			for(i=0;i<5;i++)
			{
			if(max==s[i].smarks)
			{
			
			printf("%d %s %d",s[i].sid,s[i].sname,s[i].smarks);
		     }
			}
			
			break;
			
		case 4:
		      min=s[0].smarks;
			
			for(i=0;i<5;i++)
			{
				if(s[i].smarks<min)
				{
					min=s[i].smarks;
					
				}
			
			}
		for(i=0;i<5;i++)
			{
			if(min==s[i].smarks)
			{
			
			printf("%d %s %d",s[i].sid,s[i].sname,s[i].smarks);
		     }
		 }
			break;
				
	}
}
