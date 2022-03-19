#include <stdio.h>

void printR(float );
float delta(float a,float b, float c);

void main()
{
	float fd1,fd2,fd3;
	fd2 =5.0;
	fd1 =3.0;
	fd3=2.0;
	printR(delta (fd1,fd2,fd3));
}

float delta(float a,float b, float c)
{
	
	float d=b*b -4*a*c;
	return d;
}

void printR(float res)
{
	if(res<0)
	{
		printf("There is no real root.\n");
	}
	else
	{
		printf("There is real root.\n");
	}
}




