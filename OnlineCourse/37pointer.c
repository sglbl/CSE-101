#include<stdio.h>  //pointer depolayan arrayler.

char *gunismi(char *gundizisi[],int uzunluk,int hangigun){
	if(hangigun>=1 && hangigun <=7)
		return gundizisi[hangigun-1];	
	else
		return NULL; //Garantiye almak için.
}

int main(){
	//char veritipinde pointerlarý taþýsýn.
	char *gunler[7]={"pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar"};
	//ramimizde bi yerde pazartesi arrayini taþýyan bir yer var.
	//printf("%s", gunler[0]); //yazarsak ptesiyi bastirir.
	char *p = gunismi(gunler,7,5);   //7 = gunlerin uzunlugu  , 5.gün cumayi istiyoz.
	
	if(p==NULL)
		printf("NULL");
	else
		printf("%s\n", p);
	
	return 0;
}
