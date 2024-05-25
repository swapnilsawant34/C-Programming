#include<stdio.h>

{
	int id;
	char name[90];
	int sal;
};

struct Employee emp[5];

void main()
{
	int i,j;
	for(i=0;i<5;i++){
	
	printf("Enter the employee name,id and salary\n");
	scanf("%s %d %d",&emp[i].name,&emp[i].id,&emp[i].sal);
         }
         
     printf("Display the Employee data:\n");
     for(i=0;i<5;i++){
	
	printf("%s %d %d\n",emp[i].name,emp[i].id,emp[i].sal);
         }
 int count=0;        
for(i=0;i<5;i++)
{
	if(emp[i].sal==emp[i+1].sal)
	{
		printf("Repetative salary employee  %d",emp[i].sal);
		count++;
	}
	}
		 printf("Repetative salary employee  %d",count);
		 
		 
}
