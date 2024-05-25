#include<stdio.h>
//WAP to create structure name as employee and create 5 emp data and find second highest sal employee

struct Employee
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
         
         
     int max=emp[0].sal;
	 for(i=0;i<5;i++)
	 {
	 	if(emp[i].sal>max)
	 	{
	 		max=emp[i].sal;
		 }
	 }
	 int smax=emp[0].sal;
	 
	 for(i=0;i<5;i++)
	 {
	 	if(emp[i].sal>smax&& emp[i].sal!=max)
	 	{
	 		smax=emp[i].sal;

		 }
}
printf("Second max salary is %d",smax);
}
	     
