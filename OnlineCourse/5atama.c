#include <stdio.h>
int main(){
	/*
	x=x+1   �nce sa� taraf hesaplanir.sonra atama yap�l�r.
	x+1=2 diyemezsin sol tarafta sadece degisken olmali
	
	Artirma azaltma ISLEMLERI
	i=i+1   (artirma)    i +=1
	---------
	i++ ve ++i (i yi artirmak i�in)
	
	postfix:  i++;        �nce kullan sonraki sat�rda artirmis ol 
	prefix :  ++i;         o sat�rdan artir.
	
	int i = 4;
	 printf("%d" ,++i); 
	 ekrana 5 de�erini basar.
	 
	 printf("%d" ,i++);
	 ekrana 4 de�erini basar sonraki sat�rda 5 de�erine ge�er.
	-----------
	  i-- ve --i ayn� �alisiyor
	  -------------
	  degiskenIslem=ifade
	  i = i % a
	  i %= a;
	  
	  �r:
	i = i * (a+1);      esiti   i *= a+1; 
	*/
	
	int x = 5;
	int y = 7;
	int a=2;

	x =y;
	
	y = x + a + 1;
	//y 10 oldu
	
	printf("%d\n\n\n\n",y);
	
	printf("x:%d\ny:%d\na:%d\n\n\n\n\n",x,y,a);
	//�okta bi fark yok
	printf("x:%d \n y :%d \n a: %d \n\n",x,y,a);
	
	x=4;
	y=5;
	a=6;
	
	printf("x:%d y:%d a:%d \n",--x,++y,a++);
	printf("x:%d y:%d a:%d \n",x,y,a);
	printf("x:%d y:%d a:%d \n",x--,--y,a--);
	
	//x=2 a=6 y=5
	//  x = x + (a+1)
	
	x +=a+1
	;;
	
	printf("%d\n",x);
  //x=9  
	x = y = a+4;
	
	printf("x:%d y:%d a:%d \n",x,y,a);
	
	return 0;
}
