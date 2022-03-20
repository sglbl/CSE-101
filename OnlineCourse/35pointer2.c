#include <stdio.h>
#include <string.h>
//string'lerin pointerlara uygulanmasý.

int main(){
	
	char yazi[5] = "tura";
	char *p=yazi;
	
	printf("%s\n",yazi);
	printf("%s\n",p);  //üsttekiyle ayný þey.  ramde baþlangýç adresine gidiyor.
	printf("%s\n",p+1); // sonuç ura çünkü p+1 bir sonraki uygun boþluða gidiyor. nul(l) karakteri gorene kadar devam ediyo.
	
	printf("%d\n",*p); // bu da ascii degerini gösteriyo.  p[0]nin degeri 
	return 0;
}
