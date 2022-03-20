#include <stdio.h>

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};

void goster(struct ogrenci a){
	printf("Ogrenci bilgileri: %s %s %d",a.isim,a.soyisim,a.numara);
}

struct ogrenci degerAl(){
	struct ogrenci yeni;
	printf("Bilgilerini girin:");
	scanf("%s %s %d",&yeni.isim,&yeni.soyisim,&yeni.numara);  //d den sonra bosluk birakma. yoksa bisey daha giriyon.
	return yeni;
}

int main(){	
	struct ogrenci ogrenci1 = degerAl();
	goster(ogrenci1);

	return 0;
}
