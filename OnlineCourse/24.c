/*
15 say� gir.
 3 5 1 3 2 4 4 4 5 5 9 8 9 7 7
 3sat�r 5 s�tun olsun.
Matris:
 3 5 1 3 2
 4 4 4 5 5
 9 8 9 7 7
 
 Sonuc:
 16 17 14 15 14
  */
  
#include <stdio.h>
int main(){
	
	int matris[3][5];
	int i,j;
	int sum=0;
	
	for (i=0;i<3;i++){
		for(j=0;j<5;j++){
			scanf("%d",&matris[i][j]);
		}	
	}
	
	for (i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%d ",matris[i][j]);
		}	
		printf("\n");
	}
	
	//matris bast�r�ld�. �imdi de toplama i�i.
	
	for(j=0;j<5  ;j++){
		for(i=0;i<3;i++){	
			sum += matris[i][j];
		}
		printf("%d ",sum);
		sum = 0;  //tekrardan 0l�yorum ki s�k�nt� ��kmas�n.
	}
	
	return 0;
}
