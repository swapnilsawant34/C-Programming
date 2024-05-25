
//n-no of monkey
//k-bannas eat by monkey
//j-penuts

//traveler---m-bannas
  //         p-penuts
           
 // remaing monkeys=?
 
 
  
  
 #include<stdio.h>
 void main()
 {
 	int n,m,p,k,j,N;
 	float atebanana,atepenut;
 	
 	printf("Enter the no of monkey");
 	scanf("%d",&n);
 	
 	printf("Enter the eatable bananas by monkey ");
 	scanf("%d",&k);
 	
 	printf("Enter the eatable penuts by monkey");
 	scanf("%d",&j);
 	
 	printf("Total no of bananas");
 	scanf("%d",&m);
 	
 	printf("total no of penuts");
 	scanf("%d",&p);
 	
 	 //N=n-1;
 	 
 	 atebanana=m/k;
 	 atepenut=p/j;
 	 
 	 N=n-atebanana-atepenut;
 	 
 	 
 	
 	//if((n-1) && k || j  && (n-1)<k ||  (n-1)<j )
 	if(k>0 && j>0)
 	{
 		printf("number of monkeys left=%d",N);
	}
	 
	 else 
	 {
	 	printf("Invalid Input");
	 }
 }
  
  
  
  
  
        // (n-1) && k || j  && (n-1)<k ||  (n-1)<j 
