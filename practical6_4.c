#include<stdio.h>

int main()
{
	float salesvalue,comrate,comission;
	
	printf("enter the salesvalue");
	scanf("%f",&salesvalue);
	
	
	if(salesvalue>0 && salesvalue<=5000)
	{
		comission=salesvalue*0;
	    printf("comission=%f",comission);	
	}
	else if(salesvalue>=5000 &&salesvalue<=10000)
	{
		
		comission=salesvalue*0.05;
	    printf("comission=%f",comission);
		
	}
	else if(salesvalue>=10000 &&salesvalue<=20000)
	{
		comission=salesvalue*0.10;
	    printf("comission=%f",comission);
		
	}
	else if(salesvalue>=20000 &&salesvalue<=30000)
	{
	  	comission=salesvalue*0.12;
	    printf("comission=%f",comission);	
	}
	else if(salesvalue>30000)
	{
	   comission=salesvalue*0.15;
	    printf("comission=%f",comission);	
	}	
 return 0;			
}
