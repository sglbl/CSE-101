#include <stdio.h>
int main(){
	/*
	123           1 sayısı 0,0   2sayısı 0,1  
	456           4 sayısı 1,0  (1.satır, 0.sütun)
	789           9 sayısı 2,2
	*/	
	int matris [3][3] = { {1,2,3},
						  {4,5,6},
						  {7,8,9}  };
	
	//       printf("%d",matris[2][2]);    
	//bu şekilde 2,2deki 9u bastırır.
	
	int i,j;
	for (i=0;i<3; i++) {
		for(j=0;j<3;j++){	
			printf("%d ",matris[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}