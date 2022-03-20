#include <stdio.h>
//  max(int a[],int uzunluk){          bunun yerine alttaki de olur.
int max(int *a,int uzunluk){
	int maks= a[0];
	int i;

	for(i=1; i<uzunluk ; i++){
		if(a[i]>maks){
			maks= a[i];
		}
	}

	return maks;	
}

int main(){
	int sayilar[5]={1,2,3,4,5};
	int maks = max(sayilar,5);
	
	printf("Sayilar dizisinin en buyuk elemani %d'dir. \n",maks);
	return 0;
}
