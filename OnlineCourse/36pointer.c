#include <stdio.h>  //D�n�� tipi pointer olan fonksiyonlar.
#include <string.h>  //yazdigimiz kelimenin .. indeks ve sonrasini gosteren program.

char *dondur(char *p,int indeks){	
	//yine stringe ait oldugu i�in pointer�n char donmesi gerekiyor.

	int uzunluk = strlen(p);
	
	if(indeks > uzunluk){
		return NULL; //hi�bi yeri gostermemesini saglamak i�in.
	}
	else{
		return p+indeks;
	}

}

int main(){
/*	int i=*p;
	printf("%d",*p);
	//b�yle bir fonksiyon yazmak hata verir. Pointera de�er atanmamis.Belki de ramde sistem  �eyi g�steriyodur.
	*/
//	int *p=NULL; //0 da yazabilirsin.Bu �ekillerde hata vermez.
	char dizi[]="yazilim";   //string tan�mlad�k. 	
	char *p =dondur(dizi,1);

	if (p==NULL){
		printf("Pointer NULL");
	}
	else
		printf("%s \n",p);	
	
	return 0;
}