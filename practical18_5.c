#include<stdio.h>
#include<math.h>
int count=0,sum=0;	
void main()
{
	int findprimeno(int);
	int findarmstrongno(int);
	int findperfectno(int);
	
	int no;
    printf("Enter the number\n");
	scanf("%d",&no);
	
	
	findprimeno(no);
	
	
	findperfectno(no);
	findarmstrongno(no);
	
}

int findprimeno(int no)
{
	int i;
	for( i=1;i<=no;i++)
	{
		if(no%i==0){
		
		   count++;
	}
	}
	if(count==2)
	 {
	 	printf("Number is  Prime\n");
    }
	else
	{
	  	printf("Number is not prime\n");
	}	
}


 
 int findperfectno(int no)
 {
 	int i=1;
 	while(i<no)
	{
		if(no%i==0)
		{
			sum=sum+i;    //1+2+3=6
			
			
		}
		i++;
	}
	
	if(sum==no)
	{
		printf("Number is perfect\n");
	}
	else{
		printf("Number is not perfect\n");
	}
 }
//int findarmstrongno(int no)
//{

//	int rem,temp,p;
//	temp=no;
//	while(no!=0)
//	{
//		rem=no/10;
//		++count;
//	}
//	no=temp;
//	while(no!=0)
//	{
//		rem=no%10;
//		no=no/10;
//		
//		p=pow(rem,count);
//		sum=sum+p;
//	}
	
//	if(sum==temp)
//	{
//		printf("Number is Aramstrog");
//	}
//	else
//	{
//		printf("Number is not Armstrong");
//	}
  
//} 
 
 int findarmstrongno(int num)
 {
 	int i=num,x,sum=0;
	
	while(i!=0)
	{
		x=i%10;
		sum=sum+x*x*x;
		i=i/10;
	}
	if(num==sum)
	{
		printf("Armsrong number");
	}
	else
	{
		printf("Not armstrong");
	}
  } 

