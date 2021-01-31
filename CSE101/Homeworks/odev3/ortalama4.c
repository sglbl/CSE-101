#include<stdio.h>

float find_Average(float A[100],float n);

int main(){
	int n,b;
	float A[100];

	printf("Enter the numbers:(-1 to finish.)\n");
	
	for(b= 0 ; A[b]!=-1 ; b++){

		scanf("%f",&A[b]);
		
		if(A[b] == -1){
			break;	
		}		
	}
	
	
	
	float resultavg;
		resultavg=find_Average(A,n);
		

	  printf("Average value is = %f \n", resultavg);
 	 return 0;
}




	float find_Average(float A[100],float n){
		int b;
		float sayac=0;
		float s=0;
		
		for(b= 0 ; A[b] != -1 ;b++){
			
				s=s+A[b]; 
				sayac++;
				
		}			
			return (s/sayac);
	}
