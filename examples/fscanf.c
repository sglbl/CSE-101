#include <stdio.h>

int main(){

	FILE *fp;  
	fp = fopen("fscanfTxt.txt", "a+");  //r= read
   int i=4;
   int m[1]={7};

fprintf(fp,"%d",*m);

fscanf(fp,"%d",&m);
printf("%d",*m); //m[0]
return 0;
}
