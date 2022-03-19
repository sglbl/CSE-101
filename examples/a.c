#include<stdio.h>

int main(){
	
	int a=5;
	int k=34;
	int *j=&k;
//	int &m=56;
	int *m;
	m=&k;
	
	
	printf("j %d\n",*j);
	printf("j %d\n",j);
	printf("j %u\n",j);
	printf("j %p\n\n\n",j);
		printf("m %u\n",m);


	
	//getch(4);
	return 0;
}
