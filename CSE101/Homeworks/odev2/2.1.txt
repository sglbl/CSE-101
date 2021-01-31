;--------------------ödev1-------------------------
load R3,00000011b    ; 16bitlik sayının ilk 8 hanesi
load R4,00000111b    ; 16bitlik sayının son 8 hanesi

load R7,11111111b
load R8,00000001b

xor R7,R3,R7
move R0,R7


load R7,11111111b   ; R7'ye tekrardan FF'yi verdim.

xor R7,R4,R7
addi R7,R8,R7
move R1,R7
halt
