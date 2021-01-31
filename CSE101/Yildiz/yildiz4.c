#include <stdio.h>
int main(){


	int i,s,j,giris,yildiz,bosluk;
	printf("Kac satir?");
	scanf("%d",&giris);

	yildiz=2;
	bosluk=giris-1;

	for(i=0;i<giris;i++){
		for(j=0;j<bosluk;j++){
			printf(" ");
		}
		for(j=0;j<yildiz;j++){
			if(j==0)
				printf("/");
			else if(j==yildiz-1)
				printf("\\");
			else
				printf("*");
		}
		printf("\n");
		bosluk--;
		yildiz +=2;
	}

	yildiz-=2;
	bosluk=0;

	for(i=0;i<giris;i++){
		for(j=0;j<bosluk;j++){
			printf(" ");
		}
		for(j=0;j<yildiz;j++){
			if(j==0)
				printf("\\");
			else if(j==yildiz-1)
				printf("/");
			else
				printf("*");
		}
		printf("\n");
		bosluk++;
		yildiz -=2;
	}
	


	return 0;
}