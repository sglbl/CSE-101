#include <stdio.h> //text tersi yazd�rma program�.
#include <string.h>

void terscevir(char dizi[]){
	int i,uzunluk,gecici;
	uzunluk = strlen(dizi); //uzunlugu bul. sonra yar�s� kadar dondur. 
	
	for (i=0; i<uzunluk/2;i++){
		gecici =dizi[i];
		dizi[i]= dizi[uzunluk-1-i];
		dizi[uzunluk-1-i]= gecici;
	}		
}

int main(){
	char text[7]="Mustafa";
	int uzun=strlen(text);
	printf("%d",uzun);
	
	terscevir(text);
	printf("%s",text);
	return 0;
}
