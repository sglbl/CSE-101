#include <stdio.h>

int main(){	
		int x=2, y=3, z=4;
		int *ptr_z = &z;
		int *ptr_y = &y;
		int *ptr_x = &x;
		int *temp = ptr_x;
		
		*ptr_x = 3;
		ptr_x = ptr_z;
		ptr_z = temp;
		*ptr_z = 1;
		*ptr_y = *ptr_x;
		//*ptr_y = 10;  //anlama amaclı ekledim
		printf("x %d, y %d, z %d\n",x,y,z );
	return 0;
}