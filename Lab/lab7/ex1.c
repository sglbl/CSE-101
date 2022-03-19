#include<stdio.h>
int main(){

int suloarray[5];
int i;
for(i=0;i<5;i++){

printf("\nenter %d . number:",i);
scanf("%d",&suloarray[i]);

}

for(i=0;i<5;i++){

printf("\nsuloarray[%d]:%d",i+1,suloarray[i]);

}



return 0;
}
