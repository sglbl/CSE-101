#include <stdio.h>
int main(){

int n,i,flag=0;

printf("+ olan bir sayi gir.");
scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        // asal olmayan icin durum
        if(n%i==0)  //tam bolunuyorsa asal degil. flagi 1 yap.
        {
            flag=1;
            break;
        }
    }

    if (flag==0)  //flag sayac demek
        printf("%d bir asal sayidir..",n);
    else
        printf("%d asal degildir.",n);

    return 0;
}
