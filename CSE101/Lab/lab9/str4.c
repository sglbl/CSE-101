#include <stdio.h>
int sum_up_to(int);

int main()
{
	int number,sum;
	
	printf("Please enter a number:");
	scanf("%d",&number);
	
	sum = sum_up_to( number);
	printf("The sum of the numbers up to %d is %d.\n",number,sum);
	
}

int sum_up_to(int num){
	
	if (num==0)	
	{
		return num;	
	}
	else
	{
		return num + sum_up_to(num-1);	
		
	}
}