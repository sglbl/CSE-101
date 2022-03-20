#include <stdio.h>

void degerdegistir(int *a,int *b){
	int gecici=*a;
	*a=*b;
	*b=gecici;

	printf("a %d ve b %d\n",a,b);
	printf("%d ve %d \n",&a,&b);
	printf("%d ve %d \n",*a,*b);
}

int main(){
	int x=5,y=10;
	
	degerdegistir(&x,&y);
	printf("x %d ve y %d\n",x,y); //x ve y gitti. (call by reference)
	
	return 0;
}

