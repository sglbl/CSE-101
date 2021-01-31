#include<stdio.h>
int main(){


int i,j,sayi;
printf("sayi giriniz:");
scanf("%d",&sayi);


	for(i=2;i<=sayi;i++){
		for(j=2;j<i;j++){
			if(i%j == 0 ){
				printf(" %d bilesiktir.\n",i);
				break; // olmasaydi bazý sayýlarý bikaç kez gosterirdi.
			}
		}
	}



return 0;
}


