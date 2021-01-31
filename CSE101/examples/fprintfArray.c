#include <stdio.h>

int main(){

	FILE *fp;  
	fp = fopen("fprintfArray.txt", "w");  //r= read
   
	int i;
	int depo[3]={1,2,3};
	fprintf(fp,"%d",depo[2]);
/* //bu da olur tamamý için.
for(i=0;i<3;i++){


fprintf(fp,"%d",depo[i]);
printf("%d ",depo[i]);
}
*/
	fclose(fp);  
}  
