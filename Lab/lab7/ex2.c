#include<stdio.h>

int main(){
int suloarray[5];
int i;
for(i=0;i<5;i++){

printf("\nenter %d . number:",i);
scanf("%d",&suloarray[i]);

}
int max;
max = suloarray[0];

for (i=1;i<5;i++){
	if(max<suloarray[i]){
	max=suloarray[i];
}

}
printf("Max eleman: %d",max);








return 0;
}
