#include<stdio.h>
#include<string.h>
//bunun yerine string fonk içindeki strlen(isim)le de yapýlabilir.
int uzunlukdon(char name[]){
	
	int uzunluk = 0;
	int i;
	
	for (i=0;name[i] != '\0';i++){ // \0  olmadýgý sürece devam et.
		
		uzunluk++;
	}
	/*
	'm'
	'U'
	'S'
	'T'
	'A'
	'F'
	'A'
	'\0'
	*/
	return uzunluk;
		
	
}




int main(){
	
	char isim[]="Mustafa";
	printf("%d",uzunlukdon(isim));
	
	
	
	
	
	return 0;
}
