#include <stdio.h>
#include <stdlib.h>

int main(){

	char dizi[41];
	FILE *fp;
	char *cp;
	int i;
	
	printf("Karakter dizisi girin:");
	gets(dizi);
	
	if( (fp=fopen("fputc.txt","w"))==NULL ){
		printf("Basarisiz.");
		exit(1);
	}
	
	cp=dizi;
	while(*cp){
		int m=	fputc(*cp,fp);
		if(m==EOF){
			printf("Dosyaya yazma hatasi");
			exit(1);
		}
		cp++;
	}
	fclose(fp);

}
