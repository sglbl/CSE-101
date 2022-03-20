#include <stdio.h>

void f(int* arr, int *n1, int *n2, int size){
	*n1 = arr[0], *n2=arr[0];
	for(int i=0; i<size; i++){
		if(arr[i] > *n1 )
			*n1 = arr[i];
		if(arr[i] < *n2 )
			*n2 = arr[i];
	}

	printf("%d\n",*n1 );
	printf("%d\n",*n2 );
	printf("1-Adress of n1 is %p\n", &n1 );
}

int main(){
	int n1, n2;
	int array[5] = {1,2,3,8,5};
	f(array, &n1, &n2, 5);
	printf("Adress of n1 is %p\n", &n1 );
	printf("Numbers are %d and %d\n", n1, n2 );
}