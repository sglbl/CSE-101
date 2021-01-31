#include <stdio.h>

int main(){

	FILE *fp;  
	fp = fopen("fprintf.txt", "w");  //r= read
   
	int i;
	char depo[]={'s','g','l','b','l'};

fprintf(fp,"%s",depo);
//printf("%s",depo);

	fclose(fp);  
}  
