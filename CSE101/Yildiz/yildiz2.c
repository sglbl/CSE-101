#include <stdio.h>
int main(){


	int i,s,j,giris,yildiz,bosluk;
	printf("Kac satir?");
	scanf("%d",&giris);

	yildiz=1;
	bosluk=giris-1;

	for(i=0;i<giris;i++){
			for(j=0;j<bosluk;j++){
				printf(" ");
			}
			for(j=0;j<yildiz;j++){
				printf("*");
			}
		printf("\n");
		bosluk--;
		yildiz +=2;
	}


	return 0;
}