;-----------�dev2------------
load R4,00000011b    ; 32bitlik say�n�n ilk 8 hanesi
load R5,00000111b    ; 32bitlik say�n�n 9-16 aras� hanesi
load R6,00001111b    ; 32bitlik say�n�n 17-24 aras� hanesi
load R7,00011111b    ; 32bitlik say�n�n son 8 hanesi

load R8,11111111b
load R9,00000001b

xor R8,R4,R8
move R0,R8  


load R8,11111111b   ; R8'ye tekrardan FF'yi verdim.

xor R8,R5,R8
move R1,R8

load R8,11111111b   ; R8'ye tekrardan FF'yi verdim.

xor R8,R6,R8
move R2,R8

load R8,11111111b   ; R8'ye tekrardan FF'yi verdim.

xor R8,R7,R8
addi R8,R9,R8
move R3,R8
halt
