#include <stdio.h>
 
 	int kucukSayi,i;
	int m=1;
	int *sonuc = &m;
 	
int ebob(int *sayi1,int *sayi2){
 
    
    if (sayi1 < sayi2)
        kucukSayi = *sayi1;
    else
        kucukSayi = *sayi2;
 
    for (i = 2; i <= kucukSayi; i++) {
        if (*sayi1 % i == 0 && *sayi2 % i == 0)
            *sonuc = i;
    }
    return *sonuc;
} 
 
 
 
int main() {
 	int a,b;
    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d", &a);
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &b);
    
 	ebob(&a,&b);
    printf("OBEB(%d,%d) = %d", a,b, *sonuc);
    return 0;
 
}
