#include <stdio.h>
int main(){
	/*
	123           1 say�s� 0,0   2say�s� 0,1  
	456           4 say�s� 1,0  (1.sat�r, 0.s�tun)
	789           9 say�s� 2,2
	*/	
	int matris [3][3] = { {1,2,3},
						  {4,5,6},
						  {7,8,9}  };
	
	//       printf("%d",matris[2][2]);    
	//bu �ekilde 2,2deki 9u bast�r�r.
	
	int i,j;
	for (i=0;i<3; i++) {
		for(j=0;j<3;j++){	
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}