#include <stdio.h>  //kullan�c�dan say� al. Fakt�riyelini fonk. yard�m�yla bul.
//fonk faktoriyeli int olmak zorunda. Bu yuzden d�n�� tipi int olsun.
int faktoriyel(int sayi){
	int fact=1;
	for(;sayi>0;sayi--){
		fact *= sayi;
	}
	return fact;              //d�� d�nyaya vermek i�in
}

int main(){
	int n;
	printf("Faktoriyelini istediginiz sayiyi giriniz.");
	scanf("%d",&n);
	
	printf("Faktoriyel: %d",faktoriyel(n));
	
	return 0;
}