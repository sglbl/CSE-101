#include <stdio.h>
/*
bool veritipi(true yada false)

mantiksal ifadeler dogru ise true
mantiksal ifadeler yanlis ise false
ayni zamanda butun 0 olmayan sayilar true deger sayilir.(1,2500,vs)
0 ise false degerdir.

if(1500){
	......
}    true bu

mantiksal operatorler
-------------------------------
	<  küçük müdür
	< büyük müdür
	<=  küçük yada eþit midir
	>=  büyük yada esit midir  
	== esit midir
	!=  esit degil midir   a != b seklinde

mantiksal baglaclar
bircok mantýksal ifadeyi baglayan baglaclar

&&  and demek. dogru olmasý için hepsi true olmalýdýr.   true && true && false   yanlýs olur
|| or     true için en az biri true     false || false||true   true olur.
!  deðili demek.    !true    false olur

a = x> y ? x: y;
x buyuktur y ise (? ise anlamý katti) hepsinin eþiti x olur deðilse(: deðilse anlamý katýyor.) hepsinin eþiti y
*/
int main (){
/*  birkaç alýstýrma
	----------------
	int a=40;
	int b=41;
	a>b;  false
	a<b;   true
	a>=b;  false
	a !=b; true 
	a==b;  false	*/

/*	 int a=40;
	 int b =50;
	 int c=60;
	 int d = 70;
	 a > c && c <=d && (a>b || b<d)                önce parantez                ||veya    &&ve
	 parantez içi true
	 false true true
	 false
	 
	 */
	int a,b=20 , c=30;
	a= c < b  ?  b : c       ;  //öncelikle a= kýsmýný gorme
	printf("%d\n%d",a,b);
	
	return 0;
}