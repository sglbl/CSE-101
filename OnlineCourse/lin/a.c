#include <stdio.h>
#include <stdlib.h>

int main(){
	int counter;
	FILE *filep = fopen("list.txt","r");
	if (filep==NULL)	 return 0;
	int *depo;

	counter=0;
	depo = (int*)calloc(10,sizeof(int));
	while( fscanf(filep,"%d,",&depo[counter])==1 ){
		counter++;
		printf("%d ",depo[counter-1]);
		if(counter % 10 ==0)	depo = (int*)realloc(depo, counter*10*sizeof(int));
		if(counter % 10 ==0)	printf("\n");
	}
	
	fclose(filep);
	return 0;
}