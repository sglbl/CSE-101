#include<stdio.h>

int main(){
	int sayilar[] = {1,2,3,4,5};
	/*
	printf("%d",sayilar[2]);
	*/
	int i=0;
	for(;i<=4;i++){                                //	for(   i=0   ;i<=4;i++){  olmas�na gerek yok.
		printf("%d\n",sayilar[i]);            //sayilar�n 4.indexine kadar bastirdi.
	}
	
	return 0;
}