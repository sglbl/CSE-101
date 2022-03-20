#include <stdio.h>

void f(int* arr, int *n1, int *n2, int size){
	int max, min;
	max = arr[0], min=arr[0];
	for(int i=0; i<size; i++){
		if(arr[i] > max)
			max = arr[i];
		if(arr[i] < min)
			min = arr[i];
	}
	printf("min is %d\n",min );
	printf("max is %d\n",max );
	n1 = &min;
	n2 = &max;
	printf("*n1 and *n2 are %d and %d\n",*n1,*n2 );
	printf("1-Adress of n1 is %p\n", &n1 );
}

int main(){
	int n1, n2;
	int array[5] = {1,2,3,8,5};
	f(array, &n1, &n2, 5);
	printf("2-Adress of n1 is %p\n", &n1 );
	printf("n1 and n2 are %d and %d\n",n1,n2 );
	return 0;
}