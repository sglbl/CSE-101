#include <stdio.h>
int main(){
	/*
	x=x+1   önce sað taraf hesaplanir.sonra atama yapýlýr.
	x+1=2 diyemezsin sol tarafta sadece degisken olmali
	
	Artirma azaltma ISLEMLERI
	i=i+1   (artirma)    i +=1
	---------
	i++ ve ++i (i yi artirmak için)
	
	postfix:  i++;        önce kullan sonraki satýrda artirmis ol 
	prefix :  ++i;         o satýrdan artir.
	
	int i = 4;
	 printf("%d" ,++i); 
	 ekrana 5 deðerini basar.
	 
	 printf("%d" ,i++);
	 ekrana 4 deðerini basar sonraki satýrda 5 deðerine geçer.
	-----------
	  i-- ve --i ayný çalisiyor
	  -------------
	  degiskenIslem=ifade
	  i = i % a
	  i %= a;
	  
	  ör:
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
	//çokta bi fark yok
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
