#include <stdio.h>

int main(){
	FILE *filep;
	char text[256];	
	filep = fopen("50text.txt","a");

	if (filep==NULL)
		printf("Dosya olusmadi.");
	else
	{	
		printf("Bir sey yazin ");
		fgets(text,256,stdin);
		fputs(text,filep);
		printf("Dosyaya yazildi.");
		fclose(filep);
	}
	return 0;
}
