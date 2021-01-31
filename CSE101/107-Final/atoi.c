#include <stdio.h>
//Suleyman GOLBOL
//1801042656

int atoiRec(char *str, int n){
	int deger;
	int i=0;
	deger=(int)str[0]-48;
	printf("%d",deger);

	if(n==1)
		return 0;
	else
		return atoiRec(str+1,n-1);
}

int main(){
	int size;
	char string[1200];
	printf("Enter number as string:");
	scanf("%s",string);
	printf("Enter size");
	scanf("%d",&size);

	atoiRec(string,size);
}