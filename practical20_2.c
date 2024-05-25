#include<stdio.h>
#include<math.h>

void main()
{
	float SI(float ,float,float);
		float CI(float ,float,float);
	
	int p,t,r; float result;
	
	printf("Enter the Principle\n");
	scanf("%f",&p);
	
	printf("Enter the Time\n");
	scanf("%f",&t);
	
	printf("enter the rate of intesest\n");
	scanf("%f",&r);
	
	result=SI(p,t,r);
	printf("Simple Intrest=%f",result);
	
	result=CI(p,t,r);
	printf("Coumpond Intrest=%f",result);
}


float SI(float p,float t,float r)
{
	float SI1;
	
	SI1=(p*t*r)/100;
	return 	SI1;
}

float CI(float p, float t,float r)
{
	float CI1,compoundintrest;
	
	CI1=p*((1+(r/100),t));
	
//	compoundintrest=pow(CI1,t);
	return CI1;
	
}
