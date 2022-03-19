#include<stdio.h>

int main(){
int numbers[1000];
int i,sayac=1;

for(i=0;i<1000;i+=3){

numbers[i]=i;
}

for(i=0;i<1000;i=i+3){

printf("\n%d . number:%d",sayac,numbers[i]);
sayac++;
}


return 0;
}
