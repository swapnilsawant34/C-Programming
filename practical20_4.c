#include<stdio.h>
void main()
{
float CircleArea(float);
float RectArea(float,float);
float SquareArea(float);
float TriArea(float,float);
	
	int ch;
	float result;
	printf("Enter the choice\n");
	scanf("%d",&ch);
	float r,l,b,a,h,base;
	switch(ch)
	{
		case 1:
			printf("Enter the radius of circle\n");
			scanf("%f",&r);
			
			result=CircleArea(r);
			printf("Area of Circle=%f",result);
			break;
		
		case 2:
		    printf("Enter the Length and bredth\n");
			scanf("%f %f",&l,&b);
				
	        result=RectArea(l,b);
	       	printf("Area of reactangle=%f",result);
	        break;
	       
	    case 3:
		   printf("Enter the side of square\n");
		   scanf("%f",&a);
		   
		   result=SquareArea(a);
		   printf("Area of Square=%f",result);
		   break;
		  
		case 4:
		  printf("Enter the base and height of triangle\n");
		  scanf("%f %f",&base,&h);
		  
		  result=TriArea(base,h);
		  printf("Area of triangle=%f",result);
		  break;
		  
		default:
		   printf("Invalid Choice");        
    }
	
}

float CircleArea(float r)
{
	float carea;
	carea=2*3.14*r;
	
	//printf("Area of Circle=%f",carea);
	return carea;
}

float RectArea(float l,float b)
{
	float rarea;
	rarea=l*b;
//	printf("Area of reactangle=%f",rarea);
	return rarea;
}

float SquareArea(float a)
{
	float sarea;
	sarea=a*a;
	//printf("Area of Square=%f",sarea);
	return sarea;
 } 

float TriArea(float base,float h)
{
	float tarea;
	tarea=0.5*base*h;
	//printf("Area of Triangle=%f",tarea);
	return tarea;
}
