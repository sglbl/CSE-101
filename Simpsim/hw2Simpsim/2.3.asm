;----------ASSIGNMENT2.3--------------------
load R0,16        ;sayý girdilerinin adedi
load R1,Sayilarim
load R2,11110000b  ; girdilerimi and'leyeceðim deðer
; bu sayý ile and'lenince sonuç 16nýn katý çýkar.
load R3,0
load R4,1
load R5,0  ;16(hex deðeri 10h) sayý olunca bölme iþlemini yap.

SayiToplama:
load R6,[R1]
and R6,R6,R2 
;240(R2) ile and'leyince integer olarak 16nýn kaç katý olduðu kalýyor.
ror R6,4      
; ror4 binary sayýyý 4 saða kaydýrarak 2^4 sayýsýna bölünmesini saðlýyor.
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
;R0'a basýlan deðer ortalamanýn hexadecimal halidir.
;hex sayýdaki 1ler basamaðý + 16*10lar basamaðý= decimal sayý.
;Bu program "Sayilarim" içindeki sayýlarýn 16 ile bölümünden
; bölenin kaç olduklarýna bakýp bunlarý topluyor.
;sonrasýnda ise 16'ya bölüp ortalamasýný alýyor.
; sonuçta significant number ve kalanlarýn toplamýndan dolayý küçük bir hata payý oluþabilir.

