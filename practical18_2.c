#include<stdio.h>

void main()
{
	float finddiameter(float);
	float r,diameter;
	printf("Enter the radius of circle\n");
	scanf("%f",&r);
	
	diameter=finddiameter(r);
	printf("Diameter of circle is %f",diameter);
	
	float circumfernce;
	float findcircumfernce(float);
	circumfernce=findcircumfernce(r);
	printf("\nCircumfernce is %f\n",circumfernce);
	
	float area;
	float findarea(float);
	area=findarea(r);
	printf("Area is %f\n",area);
}

float finddiameter(float rad)
{
	float d;
	d=2*rad;
	
	return d;
}

float findcircumfernce(float rad)
{
	float c;
	c=2*3.14*rad;
	return c;
}

float findarea(float rad)
{
	float a;
	a=3.14*rad*rad;
	return a;
}
