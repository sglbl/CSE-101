#include <stdio.h>

int main(){

int ort1,ort2,ort3;
int i,j,temp[2][4]={{21,22,23,24},{25,26,27,28}};
//i sehir j ise gün.

	for (i=0;i<2; i++) {
		
		for(j=0;j<4;j++){
			
			printf("%d. sehir %d. gun %d derece sicaklik.\n ",i+1,j+1,temp[i][j]);
		}
		
		
	}

ort1=temp[1][3]+temp[0][3];

	printf("4.gun ortalama sicaklik %d",ort1/2);

ort2=temp[1][0]+temp[0][1]+temp[0][2]+temp[0][3];

	printf("ilk sehir %d",ort2/4);

ort3=temp[1][3]+temp[1][2]+temp[1][3]+temp[1][3];

	printf("2.sehir %d",ort1/4);






return 0;

}
