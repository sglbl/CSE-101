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
	<  k���k m�d�r
	< b�y�k m�d�r
	<=  k���k yada e�it midir
	>=  b�y�k yada esit midir  
	== esit midir
	!=  esit degil midir   a != b seklinde

mantiksal baglaclar
bircok mant�ksal ifadeyi baglayan baglaclar

&&  and demek. dogru olmas� i�in hepsi true olmal�d�r.   true && true && false   yanl�s olur
|| or     true i�in en az biri true     false || false||true   true olur.
!  de�ili demek.    !true    false olur

a = x> y ? x: y;
x buyuktur y ise (? ise anlam� katti) hepsinin e�iti x olur de�ilse(: de�ilse anlam� kat�yor.) hepsinin e�iti y
*/
int main (){
/*  birka� al�st�rma
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
	 a > c && c <=d && (a>b || b<d)                �nce parantez                ||veya    &&ve
	 parantez i�i true
	 false true true
	 false
	 
	 */
	int a,b=20 , c=30;
	a= c < b  ?  b : c       ;  //�ncelikle a= k�sm�n� gorme
	printf("%d\n%d",a,b);
	
	return 0;
}