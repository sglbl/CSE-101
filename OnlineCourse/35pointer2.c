#include <stdio.h>
#include <string.h>
//string'lerin pointerlara uygulanmas�.

int main(){
	
	char yazi[5] = "tura";
	char *p=yazi;
	
	printf("%s\n",yazi);
	printf("%s\n",p);  //�sttekiyle ayn� �ey.  ramde ba�lang�� adresine gidiyor.
	printf("%s\n",p+1); // sonu� ura ��nk� p+1 bir sonraki uygun bo�lu�a gidiyor. nul(l) karakteri gorene kadar devam ediyo.
	
	printf("%d\n",*p); // bu da ascii degerini g�steriyo.  p[0]nin degeri 
	return 0;
}
