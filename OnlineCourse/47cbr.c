#include <stdio.h>
//#include <string.h> 

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};

void goster(struct ogrenci *p){
	printf("Ogrencinin bilgileri:\nIsim:%s\nSoyisim:%s\nNumara:%d",p->isim,p->soyisim,p->numara);
}

int main(){
	struct ogrenci ogrenci1={"Ahmet","Gedik",156};  //ogrenci1 nesnesini tanittik.
	goster(&ogrenci1);
	return 0;
}
