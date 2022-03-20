#include <stdio.h>
#include <string.h>			//strlen'i fonk olarak yazmak amacýmýz. 29daki gibi.
				
int benimStrlen(char *p){   //char *p yerine char p[] de olurdu.
	int uzunluk = 0;
	int i;
	
	for (i=0; p[i] != '\0' ;i++){ // \0  olmadýgý sürece devam et.
		uzunluk++;
	}
	/*
	'M'
	'u'
	's'
	't'
	'a'
	'f'
	'a'		//  7 harfli.
	'\0'
	*/
	return uzunluk;
}

int main(){
	char isim[]="Mustafa";
	printf("%d",benimStrlen(isim));
	
	return 0;
}
