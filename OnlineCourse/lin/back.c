#include <stdio.h>
#include <string.h>

char* f(char str[], int chr){
	int i=0;
	if(*str == '\0'){
		printf("sgo\n");
		return str-1;
	}
	else{
		printf("Ascii of %c is %d\n",str[i],(int)str[i] );
		f(str+1, chr);
		if(str[i] == chr)
			printf("str[i] is %c\n",str[i] );
	}

	return str;
}

int main(){
	int num;	
	char str[]="Helloa1bwaa";
	printf("Enter a number for ascii:\n");
	scanf("%d",&num);
	char* string = f(str,num);
	printf("String is %s\n",string);
	printf("Adress of string is %p\n", &string );
	printf("Adress of str is %p\n", &str );

	return 0;
}