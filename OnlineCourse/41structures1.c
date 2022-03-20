#include <stdio.h>
//c++'taki class'ların c'deki versiyonu gibi.
/*
	struct etiketadi{
		degiskentipi degisken1;
		degiskentipi degisken2;
		degiskentipi degisken3;
*/

struct Student{
	char isim[15];
	char soyisim[15];
	int numara;
	int yas;
}; //nesneyi ;den once de olusturabilirdik.



int main(){
	struct Student ahmet = {"Ahmet","Gedikli",135,23};  //ahmet diye bi nesne olusturduk su anda.
	
	printf("%s %s %d %d",ahmet.isim,ahmet.soyisim,ahmet.numara,ahmet.yas);
		
	
	
	
	
	
	
	return 0;
}
