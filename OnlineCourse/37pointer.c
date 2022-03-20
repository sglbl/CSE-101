#include<stdio.h>  //pointer depolayan arrayler.

char *gunismi(char *gundizisi[],int uzunluk,int hangigun){
	if(hangigun>=1 && hangigun <=7)
		return gundizisi[hangigun-1];	
	else
		return NULL; //Garantiye almak i�in.
}

int main(){
	//char veritipinde pointerlar� ta��s�n.
	char *gunler[7]={"pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar"};
	//ramimizde bi yerde pazartesi arrayini ta��yan bir yer var.
	//printf("%s", gunler[0]); //yazarsak ptesiyi bastirir.
	char *p = gunismi(gunler,7,5);   //7 = gunlerin uzunlugu  , 5.g�n cumayi istiyoz.
	
	if(p==NULL)
		printf("NULL");
	else
		printf("%s\n", p);
	
	return 0;
}
