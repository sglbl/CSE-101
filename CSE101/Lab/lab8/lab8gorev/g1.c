#include <stdio.h>

int main(){

	int i,j,sonuc,array[]={10,15,90,200,110};
	int max=array[0];
	int min=array[0];


	for(i=0;i<5;i++){
		if(array[i]>max){
			max=array[i];
		}
	}

	for(j=0;j<5;j++){	
		if(array[j]<min){
			min=array[j];
		}
	}
	
	sonuc=max-min;
	printf("%d",sonuc);


return 0;

}
