#include <stdio.h>
#include <string.h> //strcpy için

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};

struct ogrenci *degerAl(struct ogrenci *p){
	strcpy(p->isim,"Mehmet");   //bilgileri degistirdik.
	strcpy(p->soyisim,"Gencol");
	p->numara=455;
	return p;
}

void goster(struct ogrenci p){
	printf("Ogrencinin bilgileri:\nIsim:%s\nSoyisim:%s\nNumara:%d\n\n",p.isim,p.soyisim,p.numara);
}

int main(){
	struct ogrenci *tut;
	struct ogrenci ogrenci1={"Ahmet","Gedik",156};  //ogrenci1 nesnesini tanittik.
	goster(ogrenci1);
	//////////////////////////
	tut = degerAl(&ogrenci1);
	goster(ogrenci1);
	
	printf("%s %s %d",tut->isim,tut->soyisim,tut->numara); //call by reference metodu
	return 0;
}
