#include <stdio.h>

int main(){
	
	int a=5,*ap;      ///pointer� ap
	float b=3.2,*bp;
	double c=3.412,*cp;
	char d='a',*dp;
	
	int sayilar[5]= {1,2,3,4,5};
	int *arrayp; //pointer tan�mlad�k.
	
	ap =&a;
	bp =&b;
	cp =&c;
	dp =&d;
	
	arrayp= &sayilar[1];
	//altta printf'te ap yazd�k cunku adres pointer'�n i�inde.
	
	printf("%u adresindeki int'in degeri %d dir.\n",ap,*ap);   // *ap pointer�n i�indeki de�er oluyor.ap de adres.
	printf("%u adresindeki float'in degeri %f dir.\n",bp,*bp);
	printf("%u adresindeki double'in degeri %lf dir.\n",cp,*cp);
	printf("%u adresindeki char'in degeri %c dir.\n",dp,*dp);
	printf("%u adresindeki sayilar isimli char'in elemaninin degeri %d dir.\n",arrayp,*arrayp);				
	
	return 0;
}
