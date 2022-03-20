#include<stdio.h>
#include<string.h>

struct Address{
	char mahalle[15];
	char cadde[18];
	char sokak[15];	
};

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
	int yas;
	
	struct Address adres; //Struct Address yapýsýndan bir nesne. 
};




int main(){
	struct ogrenci ogrenci1;
	//	ogrenci1.isim= "Mustafa Murat";      c'de bu yapýlamýyor.Bu yuzden;
	strcpy(ogrenci1.isim,"Mustafa Murat");
	strcpy(ogrenci1.soyisim,"Baltaci");
	ogrenci1.numara=132;     //strcpye gerek yok cunku intlerde sýkýntý yok.
	ogrenci1.yas=24;
	strcpy(ogrenci1.adres.mahalle,"Bahcelievler");
	strcpy(ogrenci1.adres.cadde,"7.cad");
	strcpy(ogrenci1.adres.sokak,"1032. sok.");
	
	printf("%s %s %d %d %s %s %s",ogrenci1.isim, ogrenci1.soyisim, ogrenci1.numara, ogrenci1.yas,
								  ogrenci1.adres.mahalle, ogrenci1.adres.cadde, ogrenci1.adres.sokak);
	
	return 0;
}
