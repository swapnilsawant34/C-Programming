#include<stdio.h>
#include<stdlib.h>
struct Employee
{
	int id;
	char name[90];
	int sal;
};
struct Employee *emp;
void main()
{
	int i,j,size;
	printf("\nEnter the size count");
	scanf("%d",&size);
	emp= (struct Employee* )malloc(sizeof(struct Employee)*size);
	
	
	for(i=0;i<size;i++){
	
	printf("Enter the employee name,id and salary\n");
	scanf("%s %d %d",&emp[i].name,&emp[i].id,&emp[i].sal);
         }
         
     printf("Display the Employee data:\n");
     for(i=0;i<size;i++){
	
	printf("%s %d %d\n",emp[i].name,emp[i].id,emp[i].sal);
         }
        
for(i=0;i<size;i++)
{
//	if(emp[i].sal==emp[i+1].sal)
//	{
//		printf("Repetative salary employee  %d\n",emp[i].sal);
		
//	}
	
	if(emp[i].sal!=emp[i+1].sal)
		 printf("Delted the Repetative salary employee  %d\n",emp[i].sal);
		 
		 
}
}

#include<stdio.h>

/*struct Employee
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
        
for(i=0;i<5;i++)
{
	//if(emp[i].sal==emp[i+1].sal)
	//{
	//	printf("Repetative salary employee  %d\n",emp[i].sal);
		
	//}
	if(emp[i].sal!=emp[i+1].sal)
		 printf("Delted the Repetative salary employee  %d\n",emp[i].sal);
		 
		 
}
}/*


