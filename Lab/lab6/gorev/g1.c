#include <stdio.h>

int main(){

int i,n=0;
int a=0;
int b=1;
int c;
	printf("Kac terim istersin?");
	scanf("%d",&n);
	printf("sonuc:");
	
	for(i=1;i<=n;++i){
	 	printf("%d ", a);
			c=a+b;
			a = b;
			b = c;
	}



return 0;
}
