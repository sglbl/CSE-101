#include <stdio.h>
/*	Dosyalar bir pointer tarafýndan tutuluyor.Dosya olusturunca buna pointer atamak zozrundayiz.
	Bu da FILE pointeri.		*/

int main(){
 /* FILE *filep = fopen("dosya_adi","mod");
	"w"= dosyayi olusturma degistirme (varsa icindekileri silip yenisini olusturur.)
	"r"= dosyayi okuma (Dosya yoksa NULL deger atar.)
	"a"=varolan dosyayi icindekileri kaybetmeden degistirmeyi saglar.
	"w+" "r+" "a+"=hem yazma hem okuma izni icin kullanilir.
	*/
	FILE *filep = fopen("a.txt","r");
	if(filep==NULL)
		printf("Oyle bir dosya yok.");
	else
		printf("Dosya var");
	
	return 0;
}
