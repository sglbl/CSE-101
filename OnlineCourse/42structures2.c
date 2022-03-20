#include <stdio.h>

struct araba {
	int tekerleksayisi;
	int vitessayisi;
	int model;
	float motor;
	int beygir;
}araba1,araba2;



int main() {
	//araba1={0} dersen içindeki hepsini 0 olarak atar.
	
	struct araba araba1 = {4,6,2011,3.0,300};  //sadece araba1 yazarsan olmaz,sadece c++'da var o.
	araba2 = araba1;
	
	printf("%d %d %d %.2f %d",araba2.tekerleksayisi,araba2.vitessayisi,araba2.model,araba2.motor,araba2.beygir);



	return 0;
}
