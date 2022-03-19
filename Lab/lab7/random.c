#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

srand(time(NULL));     //to get different random numbers at eachexecution


int r;
r=rand();  //) sonrasında %10 eklersen 10la bolumden kalanı alır. 1 10arası bişey uretir
                   //to get one random number
printf("%d",r);





return 0 ;
}
