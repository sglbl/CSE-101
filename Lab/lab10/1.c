#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *fp;  
	
	
		fp = fopen("1.txt", "r");  //r= read
		if( fp==NULL ){
			printf("Dosya yoktur.");
		}	
		else{
			int i;
			int depo;
			for(i=0;i<11;i++){
		 		fscanf(fp, "%d",&depo);
		 		printf("%d ", depo);
			}
		fclose(fp);  
		}  
}