#include<stdio.h>

int carp(int matris[],int size){          //boyut bilgisi için size eklendi.
	int carpim=1;
	int i=0; //array deðiþkeni tanýmladým. forda ilk kýsým boþ bu yuzden.
	
	for(;i<size;i++){	
		carpim *= matris[i];
	}
	return carpim;
}
int main(){
	
	int sayilar[5]= {1,2,3,4,5};
	
	printf("%d",carp(sayilar,5));
	
	
	return 0;
}
