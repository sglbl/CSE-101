;----------ASSIGNMENT2.3--------------------
load R0,16        ;say� girdilerinin adedi
load R1,Sayilarim
load R2,11110000b  ; girdilerimi and'leyece�im de�er
; bu say� ile and'lenince sonu� 16n�n kat� ��kar.
load R3,0
load R4,1
load R5,0  ;16(hex de�eri 10h) say� olunca b�lme i�lemini yap.

SayiToplama:
load R6,[R1]
and R6,R6,R2 
;240(R2) ile and'leyince integer olarak 16n�n ka� kat� oldu�u kal�yor.
ror R6,4      
; ror4 binary say�y� 4 sa�a kayd�rarak 2^4 say�s�na b�l�nmesini sa�l�yor.
addi R3,R3,R6  
addi R1,R1,R4
addi R5,R5,R4
jmpEQ R5=R0 ,bitir
jmp SayiToplama


bitir:
move r0,r3
halt
org $BB

Sayilarim: db 18,33,17,80,144,64,176,208,96,112,49,18,16,20,224,32
	db 0

;NOT:
;R0'a bas�lan de�er ortalaman�n hexadecimal halidir.
;hex say�daki 1ler basama�� + 16*10lar basama��= decimal say�.
;Bu program "Sayilarim" i�indeki say�lar�n 16 ile b�l�m�nden
; b�lenin ka� olduklar�na bak�p bunlar� topluyor.
;sonras�nda ise 16'ya b�l�p ortalamas�n� al�yor.
; sonu�ta significant number ve kalanlar�n toplam�ndan dolay� k���k bir hata pay� olu�abilir.

