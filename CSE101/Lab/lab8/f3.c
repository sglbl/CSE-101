#include <stdio.h>

int is_prime(int number);

void main()
{
	int num;
	int check_val =0;

	while(check_val == 0)  //bu dogru oldugu muddetce calistirir.
	{
	printf("Enter a number:");
	scanf("%d",&num);
	check_val = is_prime(num);
	
	}
}


int is_prime(int number)
{
	for(int i=2;i<number;i++)
	{
		if(number%i==0)
		{
			return 0;
		}
	}
	return 1;
}



