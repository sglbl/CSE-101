#include <stdio.h>
#include <string.h>
/*   count tut 	*/

char* positiveIntToString( int n ) {
    if ( n == 0 ) {
        return "0";

    } else {
        return positiveIntToString( n/10 ) + ( (char)n%10 ) ;
    }
}

int main(){
	char str[50];
	strcpy (str, positiveIntToString(25) );
	//printf("Answer: %s\n", positiveIntToString(25) );
	printf("Answer: %s\n", str );
	for(int i=0; i <10; i++){
		printf("str[i]=%c\n", str[i] );
	}
}


/*

235 = 2*10^2 + 3*10^1 + 5 

*/