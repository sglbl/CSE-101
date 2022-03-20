#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x,y;
}num;

int main(){
	FILE *out;
	FILE *in;
	
	num p1={
		.x=18,
		.y=-2
	};

	in = fopen("point.bin","rb");
	if(in==NULL)	return 0;

	size_t n;
	n = fread(&p1, sizeof(num), 1, in);
	fclose(in);

	if(n==0)	return 4;
	
	printf("n is %ld\n",n );

	printf("Readed points are (%d,%d)\n", p1.x,p1.y);

	

	return 0;
}
