#include <stdio.h>  //Dönüþ tipi pointer olan fonksiyonlar.
#include <string.h>  //yazdigimiz kelimenin .. indeks ve sonrasini gosteren program.

char *dondur(char *p,int indeks){	
	//yine stringe ait oldugu için pointerýn char donmesi gerekiyor.

	int uzunluk = strlen(p);
	
	if(indeks > uzunluk){
		return NULL; //hiçbi yeri gostermemesini saglamak için.
	}
	else{
		return p+indeks;
	}

}

int main(){
/*	int i=*p;
	printf("%d",*p);
	//böyle bir fonksiyon yazmak hata verir. Pointera deðer atanmamis.Belki de ramde sistem  þeyi gösteriyodur.
	*/
//	int *p=NULL; //0 da yazabilirsin.Bu þekillerde hata vermez.
	char dizi[]="yazilim";   //string tanýmladýk. 	
	char *p =dondur(dizi,1);

	if (p==NULL){
		printf("Pointer NULL");
	}
	else
		printf("%s \n",p);	
	
	return 0;
}