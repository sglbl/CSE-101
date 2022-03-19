#include<stdio.h>


float add(float a, float b);

float sub(float a, float b);

float mult(float a, float b);

float div(float a,float b);

float power(float base, float exponent);

float find_Average(float y,float z);

float find_maximum(float A[100], float n);

int main(){
	int num;
	printf("%%%% WELCOME TO GTU CALCULATOR MACHINE  %%%% \n");
	printf("%%%% STUDENT NAME: SULEYMAN GOLBOL      %%%% \n");
	printf("%%%% SCHOOL NUMBER: 1801042656          %%%% \n");
	printf("%%%% PLEASE SELECT FROM THE FOLLOWING   %%%% \n");
	while (1){
	printf("%%%% MENU :                             %%%%\n");
	printf("(1) ADD TWO NUMBERS\n");
	printf("(2) SUBTRACT TWO NUMBERS\n");
	printf("(3) MULTIPLY TWO NUMBERS\n");
	printf("(4) DIVIDE TWO NUMBERS\n");
	printf("(5) TAKE THE NTH POWER OF A NUMBER\n");
	printf("(6) FIND AVERAGE OF NUMBERS INPUTTED\n");
	printf("(7) FIND THE MAXIMUM OF NUMBERS INPUTTED\n");
	printf("(0) EXIT\n");
	printf("PLEASE SELECT:\n");
	
	scanf("%d", &num);
	printf("entered : %d\n", num);
	int n;
	float A[100];
	float x;
	float y;
	float z;
	

 		 
 	if(num==0){
 		printf("GOODBYE");
 		return 0;
	 }
	

		
	if(num==1){
		printf("please enter first number\n");
		scanf("%f", &x);
		printf("please enter second number\n");
		scanf("%f", &y);
	
			float resultadd;
			resultadd=add(x,y);						//function
		
		printf("Result: %f\n\n",resultadd);
	}
		
	else if(num==2){
		printf("please enter first number\n");
		scanf("%f", &x);
		printf("please enter second number\n");
		scanf("%f", &y);
		
			float resultsub;
			resultsub=sub(x,y);					//function
		
		printf("Result: %f\n\n",resultsub);}	
		
	else if(num==3){
		printf("please enter first number\n");
		scanf("%f", &x);
		printf("please enter second number\n");
		scanf("%f", &y);
		
			float resultmult;
			resultmult=mult(x,y);				//function
		
		printf("Result: %f\n\n",resultmult);}
	
	else if(num==4){
		printf("please enter first number\n");
		scanf("%f", &x);
		printf("please enter second number\n");
		scanf("%f", &y);
		
			float resultdiv;
			resultdiv=div(x,y);					//function
		
		printf("Result: %f\n\n",resultdiv);}
		
	else if(num==5){
		printf("please enter base number\n");
		scanf("%f", &x);
		printf("please enter exponent number\n");
		scanf("%f", &y);
		
			float resultpower;		
			resultpower=power(x,y);				//function
			
		printf("Result: %f\n",resultpower);}
		
 		 
 	else if(num==6){  
	  	printf("Please enter the numbers.(-59161 to exit)\n");	
	
		int i=0;	
		y = 0;
		z =0;

		for(i=0; x != -59161 ; i++){
			scanf("%f",&x);
			if(x== -59161){
				break;
	}
			y = x+y;
			z++;

			
		}
			float resultaverage;             //function
			resultaverage=find_Average(y,z);

		printf("Result is: %f\n\n",resultaverage);




}	 
	  
	  
	else if(num==7){
		
		int c,loc; //loc=place that you can find
  		float array[100],size,  maximum;
 

		for (c=0  ;array[c]= -59161; c++){
		
			printf("Enter the number: (-59161 to exit.)");
		
			scanf("%f",&array[c]);
		
			if(array[c] == -59161 ){
			break;		 
				}						
			}

  	    		loc = find_maximum(array, c+1);            //function
 				maximum  = array[loc];

 		 printf("Maximum value is = %f .\n\n", maximum);}	  
	
 		 
 		 
		
	else if(num!=1 || num!=2 || num!=3 ||  num!= 4 ||  num!=5 ||  num!=6 || num!=7 ||  num!=0 ){
		printf("You entered a wrong number.Please enter again.\n");}
	
		
}
	return 1;	
}


     // My function contents

	float add(float a, float b){
		printf("Addition\n");
		return a+b;
		}
	

	float sub(float a, float b){
		printf("Substraction\n");
		return a-b;
		}
		
	float mult(float a, float b){
		printf("Product\n");
		return a*b;
		}
		
	float div(float a, float b){
		printf("Division\n");
		return a/b;
		}
	
	
	float resultpower;
	float power(float base, float exponent){
		printf("Taking Power\n");
		float resultpower=1.0;
		for (exponent; exponent>0; exponent--)
		{
		resultpower = resultpower * base;
		}
		return resultpower;
		}
		
		
	float find_Average(float y,float z){
		printf("Finding Average\n");
		float resultaverage;
		resultaverage = y/z;
		return resultaverage;

	
	}


	float find_maximum(float A[100], float n) {
		printf("Finding Maximum\n");
 		 int c,indication = 0;

  		for (c = 1; c < n; c++){
		  
  		  if (A[c] > A[indication])
     	 indication = c;
		}
	  return indication;
	}


