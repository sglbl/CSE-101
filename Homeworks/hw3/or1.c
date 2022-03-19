#include <stdio.h>

//  return 0 = eslesti.    return 1 = eslesmedi

void arrcmp(char ar1[], char ar2[]){
	
	int i=0;
	int match=0;
	
	for(i=0;i<5;++i){
		if(ar1[i] != ar2[i]){
			match =1;//
			break;
		}
	}
	
	if (match== 0)
		printf("Tested arrays matched.\n");
		
	if(match==1)
	printf("Tested arrays didn't match.\n");
	

}




int main(int argc, char **argv){
	
		char myarray1[5]={'g','t','u','g','t'};
		char myarray2[5]={'g','t','u','g','t'};
		char myarray3[5]={'m','t','o','j','i'};
		
		arrcmp(myarray1,myarray2);
		arrcmp(myarray1,myarray3);
		
	


	return 0;	
}
