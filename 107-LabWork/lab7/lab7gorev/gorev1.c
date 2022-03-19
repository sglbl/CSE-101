#include<stdio.h>

int main(){

int i,j,sayi;

printf("sayi gir:");
scanf("%d",&sayi);

	for(i=0; i<sayi; i++){
		for(j=0;j<(i+1);j++){
			printf("*");
		}
		printf("\n");
	}


return 0;
}
