#include <stdio.h>
/*		fclose(filep); //file pointerýna gidip dosyayý kapatýr.
		fputc(character,filep);  characteri bu dosyaya yazar.		*/
int main(){
	char veri[25] = "Yazilim Bilimi";
	int uzunluk = strlen(veri);
		
	FILE *filep = fopen("yazilimbilimi2.txt", "w");
	if(filep==NULL)
		printf("Dosya olusturulamadi.");
	else
	{
		for(int i=0; i<uzunluk; i++)
		{
			fputc(veri[i], filep);
			printf("Yazilan Karakter %c\n",veri[i]);
		}
		printf("Dosya basariyla yazdirildi."); 
	}
	fclose(filep);
	return 0;
}