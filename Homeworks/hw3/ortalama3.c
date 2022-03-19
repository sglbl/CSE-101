#include<stdio.h>

float find_Average(float A[100],float n);

int main(){
	
int n;
float A[100];
	printf("How many numbers(n) you going to enter?:");
	scanf("%d",&n);
	printf("\n Enter the numbers:");

	float resultavg;
		resultavg=find_Average(A,n);


}


float find_Average(float A[100],float n){
int i;
float a,s=0;
for(i=0;i<n;i++){
	scanf("%f",&A[i]); //entering the numbers we calculate
	}
for(i=0;i<n;i++){
	s=s+A[i];    //summing all the numbers
	}
	
a=s/n;     //taking average of numbers
	printf("\n The average of numbers is %f", a);
}
