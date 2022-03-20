#include <stdio.h>  //kullanýcýdan sayý al. Faktöriyelini fonk. yardýmýyla bul.
//fonk faktoriyeli int olmak zorunda. Bu yuzden dönüþ tipi int olsun.
int faktoriyel(int sayi){
	int fact=1;
	for(;sayi>0;sayi--){
		fact *= sayi;
	}
	return fact;              //dýþ dünyaya vermek için
}

int main(){
	int n;
	printf("Faktoriyelini istediginiz sayiyi giriniz.");
	scanf("%d",&n);
	
	printf("Faktoriyel: %d",faktoriyel(n));
	
	return 0;
}