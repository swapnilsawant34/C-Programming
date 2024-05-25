#include<stdio.h>

void main()
{
	int choice;
	
	float b,h,tarea,l,w,rarea,rad,carea,a,sarea;
	
	printf("Enter the choice");
	scanf("%d",&choice);
	
	
	switch(choice)
	{
		
		case 1:
			
			printf("Enter the base and height of triangle");
			scanf("%f%f",&b,&h);
			tarea=0.5*b*h;
			printf("Triangle=%f",tarea);
		break;
		
		
		case 2:
			printf("Enter the length and width of reactangle ");
			scanf("%f %f",&l,&w);
			rarea=l*w;
			printf("Reactangle Area=%f",rarea);
		break;
		
		
		case 3:
			printf("Enter the radius of circle");
			scanf("%f",&rad);
			carea=3.14*rad*rad;
			printf("Circle Area=%f",carea);
		break;
		
		
		case 4:
			printf("Enter the sides of Squre");
			scanf("%f",&a);
			sarea=a*a;
			printf("Squrea Area=%f",sarea);
		break;
		
		default:{
			
			printf("Wrong choice");
		}	
	}
	
}
