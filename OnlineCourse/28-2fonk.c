#include<stdio.h>

void bastir(int matrisimiz[][4],int size){   //j i�in size2 diyemeyiz c y�z�nden. Bu yuzden i�ine yazmal�y�z.
	
	int i,j;
	for (i=0;i < size ;i++){
		for (j=0;j<4;j++){
			printf("%d ",matrisimiz[i][j]);
		}
		printf("\n");
	}
	
}

int main(){ //bu fonk bast�rmay� yap�cak,d�� dunyayla ilgisiz. Bu yuzden �stte void kullan�labilir. 
	
	int matris[3][4];
	int i,j;
	
	printf("Matrisi doldurunuz:");
	
    for(i=0;i<3;i++){	
		for(j=0;j<4;j++){
			scanf("%d",&matris[i][j]);
		}
	}
	
	bastir(matris,3);  //3 galiba boyutu oluyor. ka� degeri oldugu yani
	return 0;
}
