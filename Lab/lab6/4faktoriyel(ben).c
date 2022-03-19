#include <stdio.h>

int main(){
	int c=1,sayi;
	printf("sayi gir: ");
	scanf("%d",&sayi);
	printf("Girdigin sayi %d\n",sayi);
	
	if(sayi==1 || sayi==0){
		printf("Sonuc 1.");
	}
	else{
	
		for(sayi; sayi!=1; sayi--){
			c=c*sayi;
		}
	
	printf("%d",c);
	
	}
	
	return 0;
}
