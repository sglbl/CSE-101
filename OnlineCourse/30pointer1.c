#include<stdio.h>  //pointer adres bilgisi tutan,bellek yerini gosteren de�i�ken gostericilier
//pointerlar da de�i�ken(2bayt)--------------integerlar 4 bayt
int main(){
	
	int i=5;         
	int *p = &i;        //adres bilgisi tutacak pointer�m.
	//�rne�in i 400-403 aras� olsun. pointer�m da 600de olsun.600deki pointer�m 400'� gosteriyor.
	printf("%d\n",&i);
	printf("%u\n",p);     //�imdi hex. %u olsayd� decimal.   //pointer'�n de�eri. 
	//& adres bilgisi veriyor.
	//* adresteki de�eri verir.
	printf("%d",*p);
	
	return 0;
}
