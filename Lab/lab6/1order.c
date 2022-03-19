#include <stdio.h>
int main(){
	
	int x,y,z;
	printf("sayilari gir.");
	scanf("%d\n%d\n%d",&x,&y,&z);
	
	
	if(x>=z){
		
		if (y>x)
		printf("%d > %d > %d",y,x,z);
		
		else
		if(z>=y)
		printf("%d > %d > %d", x,z,y);
	}
	else { //z>x ise
	
	if (x>y)
	printf("%d>%d>%d",z,x,y);
	else //if(z>y)
	printf("%d>%d>%d",z,y,x);                         //    3<1    s2<s1
	
	
}
	
	
	
	
	
	
	return 0;
}
