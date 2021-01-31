#include <stdio.h>
    int main(void) {
        int sayi1;
        int sayi2;
        int ekok;
        int c = 1;
        printf("1.sayin");
        scanf("%d", & sayi1);
        printf("2.sayin");
        scanf("%d", & sayi2);
        while (1) {
            c++;
            if ((c % sayi1 == 0) && (c % sayi2 == 0)) {
                ekok = c;
                break;
            }
        }
        printf("EKOK %dn", ekok);
        return 0;
    }
