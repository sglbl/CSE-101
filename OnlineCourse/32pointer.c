#include <stdio.h>

void degerdegistir(int a,int b){
	int gecici=a;
	a=b;
	b=gecici;

	printf("a %d ve b %d\n",a,b);
}

int main(){
	int x=5,y=10;	
	degerdegistir(x,y);
	printf("x %d ve y %d\n",x,y); //x ve y gitmedi ��nk� fonksiyonun i�i bitti. (call by value)
	
	return 0;
}