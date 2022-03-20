#include <stdio.h>

struct ogrenci{
	char isim[20];
	char soyisim[20];
	int numara;
};

void goster(struct ogrenci a){	
	printf("Ogrenci bilgileri: %s %s %d",a.isim,a.soyisim,a.numara);
}

int main(){	
	struct ogrenci ogrenci1={"Mustafa murat","coskun",156};	
	goster(ogrenci1);
	
	return 0;
}
