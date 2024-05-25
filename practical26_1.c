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
         
 //       for(i=0;i<5;i++)
   //      {
     //    	for(j=(i+1);j<5;j++)
       //  	{
         //		if(emp[i].sal<emp[j].sal)
         //		{
         //			struct Employee temp=emp[i];
         //			       emp[i]=emp[j];
         //			       emp[j]=temp;
		//		 }
		//	 }
		 //}
		 
		 //printf("Sorting:\n");
		 //	for(i=0;i<5;i++){
	
	//printf("%s %d %d\n",emp[i].name,emp[i].id,emp[i].sal);
      //   }   
         int max=emp[0].sal;
         int size,count;
         size=sizeof(emp[i].sal)/sizeof(emp[i]);
         for(i=0;i<5;i++)
         {
         	if(max==emp[i].sal)
         	{
         		++count;
			 }
		 }
		 printf("Second highest=%d",emp[(size-count)-1]);
	 
	     
	
//	printf("Name is %s\n",emp.name);
//	printf("Name is %d\n",emp.id);
//	printf("Name is %d\n",emp.sal);
}

