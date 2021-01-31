#include <stdio.h>

int main(){

int x,y,swap;

	printf("enter x,y ");
	scanf("%d",&x);
	scanf("%d",&y);

	swap = x;
	x = y;
	y = swap;

	printf("sayi1: %d , sayi2: %d",x,y);





	return 0;
}
