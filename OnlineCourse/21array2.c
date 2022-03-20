#include<stdio.h>

int main(){
	float toplam = 0.0;
	float sayilar [5];
	
	int i;
	for(i=0; i<5;i++){
		printf("Bir sayi giriniz:");												
		scanf("%f",&sayilar[i]);
	}																			//arrayi almis olduk.
	for(i=0;i<5;i++){
		toplam += sayilar[i];
	}																			//sayilari toplamis olduk.
	printf("girdiginiz sayilarin aritmetik ortalamasi %.2f'dir.", toplam/5);	//sayilari Bastirmis olduk.
	return 0;
}