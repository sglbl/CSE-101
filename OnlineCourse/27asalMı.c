#include<stdio.h>

/* asal m� de�il mi?
asal 2den kendisine kadar hi�bi say�ya tam bolunmeyen say�d�r. */ 

//return 0 = asal say� de�il.             return 1 =asal say�.
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
