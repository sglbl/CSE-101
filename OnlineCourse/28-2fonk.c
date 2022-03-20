#include<stdio.h>

void bastir(int matrisimiz[][4],int size){   //j için size2 diyemeyiz c yüzünden. Bu yuzden içine yazmalýyýz.
	
	int i,j;
	for (i=0;i < size ;i++){
		for (j=0;j<4;j++){
			printf("%d ",matrisimiz[i][j]);
		}
		printf("\n");
	}
	
}

int main(){ //bu fonk bastýrmayý yapýcak,dýþ dunyayla ilgisiz. Bu yuzden üstte void kullanýlabilir. 
	
	int matris[3][4];
	int i,j;
	
	printf("Matrisi doldurunuz:");
	
    for(i=0;i<3;i++){	
		for(j=0;j<4;j++){
			scanf("%d",&matris[i][j]);
		}
	}
	
	bastir(matris,3);  //3 galiba boyutu oluyor. kaç degeri oldugu yani
	return 0;
}
