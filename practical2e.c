#include<stdio.h>

void main()
{
	float length,breadth,rad,arear,perir,areac,circumc;
	
	printf("Enter length and breadth of Rectangle");
	scanf("%f%f",&length,&breadth);
	
	arear=length * breadth;
	
	perir=2*(length + breadth);
	
	printf("Enter the value of radius");
	scanf("%f",&rad);
	
	areac=3.14*rad*rad;
	circumc=2*3.14*rad;
	
	printf("Area of Rectangle=%f",arear);
	printf("Perimeter of Reactangle=%f",circumc);
	
	printf("Area of circle=%f",areac);
	printf("Circumference of Circle=%f",circumc);
	
}
