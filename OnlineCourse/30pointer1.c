#include<stdio.h>  //pointer adres bilgisi tutan,bellek yerini gosteren değişken gostericilier
//pointerlar da değişken(2bayt)--------------integerlar 4 bayt
int main(){
	
	int i=5;         
	int *p = &i;        //adres bilgisi tutacak pointerım.
	//örneğin i 400-403 arası olsun. pointerım da 600de olsun.600deki pointerım 400'ü gosteriyor.
	printf("%d\n",&i);
	printf("%u\n",p);     //Şimdi hex. %u olsaydı decimal.   //pointer'ın değeri. 
	//& adres bilgisi veriyor.
	//* adresteki değeri verir.
	printf("%d",*p);
	
	return 0;
}
