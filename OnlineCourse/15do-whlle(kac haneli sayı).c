#include <stdio.h>
int main(){
    /*    1234 rakamlarý kac haneli ile ilgili program*/
	int n;
	int hane=0;
	int toplam=0;
	
	printf("Sayiyi giriniz.");
	scanf("%d",&n);	
	do{
		toplam = toplam + (n %10) ;
		hane++;
		n = n/10;   //123 oluyor. 
	}while (n>0);
	
	printf(	"rakamlari toplami %d , %d haneli.",toplam,hane);
	return 0;
}
