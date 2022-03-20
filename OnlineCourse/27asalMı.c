#include<stdio.h>

/* asal mı değil mi?
asal 2den kendisine kadar hiçbi sayıya tam bolunmeyen sayıdır. */ 

//return 0 = asal sayı değil.             return 1 =asal sayı.
int asal_mi(int sayi){
	int i;
	for(i=2 ; i<sayi ; i++){
		if(sayi%i==0)
			return 0;
	}
	return 1;
}

int main(){
	int n;
	printf("sayi gir.");
	scanf("%d",&n);
	
	if (asal_mi(n) == 0)
		printf("Bu sayi asal sayi degildir.");
	else 
		printf("Bu sayi asal sayidir.");

	return 0;
}
