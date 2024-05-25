#include<stdio.h>

void main()
{
	float ucharge,t,total,T;
	
	printf("Enter the Electricity unit charge");
	scanf("%f",&ucharge);
	
	//tbill=ucharge*pur;
	
	
	if(ucharge<=50)
	{   
	
	  
	   
		t=ucharge*0.50;
		
	}
	else if(ucharge>50 && ucharge<=150)
	{
		t=ucharge*0.75;
		
	}
	else if(ucharge>150 && ucharge<=250)
	{
		t=ucharge*1.20;
	}
	else if(ucharge>250) 
	{
		t=ucharge*1.5;
	}
	
	printf("Total bill=%f",t);
	
	total=t*20/100;
     //T=total+t;	
	
	printf("Total bill with additional supercharge=%f",total);
	printf("Total=%f",total+t);
}
