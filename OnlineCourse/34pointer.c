#include <stdio.h>

int main(){
	
	int sayilar[5]={1,2,3,4,5};
	
	int *p =sayilar; //normalde sayilar yerine &sayilar[]. ba�lang�c adresini direkt ad yazarak da elde edebilirsin.
	
	printf("%u\n",p);
	printf("%u\n",p+1);
	printf("%u\n",p+2);
	printf("%u\n",p+3); //adresler aras� 4fark var ��nk� integer 4byte.
	
	printf("------------\n");
	
	printf("%d\n",*p);
	printf("%d\n",*(p+1));
	printf("%d\n",*(p+2));
	printf("%d\n",*(p+3));
	
	//    *p+1 = p[1] ayn� zamanda sayilar[1]
	printf("------------\n");
	
	printf("%d\n",p[0]);
	printf("%d\n",p[1]);
	printf("%d\n",p[2]);
	printf("%d\n",p[3]);

	return 0;
}
