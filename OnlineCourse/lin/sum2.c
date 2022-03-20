#include <stdio.h>

void func(int sum, int *count){	
	sum = sum + *count;
	(*count)++;    //
	if (*count <= 5)
		func(sum, count);
	else
		printf("Sum is %d \n", sum);
	return;
}

int main(void){
	int sum=0;
	int count2=1;
	int *count = &count2;
	//func(sum, count);		
	func(sum, &count2);   //bunu da denedim. 2si aynı
	return 0;
}