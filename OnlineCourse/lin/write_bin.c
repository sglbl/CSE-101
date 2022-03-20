#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x,y;
}num;

int main(){
	FILE *out;
	FILE *in;
	
	num p1={
		.x=13,
		.y=-5
	};

	out = fopen("point.bin","wb");
	if(out==NULL)	return 0;

	size_t n;
	n = fwrite(&p1, sizeof(num), 1, out);
	fclose(out);

	if(n==0)	return 4;
	
	printf("n is %ld\n",n );

	return 0;
}
