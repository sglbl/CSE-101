#include <stdio.h>
#include <string.h> //strcpy için
struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};
/*	int a=5;
	int *p=&a;
	printf("%d",*p);  //onceden boyle yapiyoduk,burda durum azcik farkli.
	//printf("%s %s %d",tut->isim ....);  boyle yapýcaz.	*/

int main(){
	struct ogrenci *tut;		//pointer'ýn veritipi deðiþkenin veritipinde olmalý.   
	struct ogrenci ogrenci1;

	strcpy(ogrenci1.isim,"Mustafa");
	strcpy(ogrenci1.soyisim,"Coskun");
	ogrenci1.numara=156;
	
	tut =&ogrenci1;
	printf("%s %s %d\n",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara);
	printf("%s %s %d",tut->isim,tut->soyisim,tut->numara);
	// (*tut).isim = tut->isim
	
	return 0;
}
