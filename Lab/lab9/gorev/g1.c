#include <stdio.h>
#include <string.h>

void reverse_string(char str_arr[]);


int main()
{
	char str_arr[100];
	
	printf("Enter a string:");
	scanf("%s",str_arr);
	
		reverse_string(str_arr);  //fonksiyonu cagirdim.
	printf("Reversed string is: %s \n", str_arr);
	
	
}

void reverse_string(char str_arr[])
{
	
	int i,uzunluk,gecici;
	uzunluk =strlen(str_arr); //uzunlugu bul. sonra yarisi kadar dondur.
	
for (i=0; i<uzunluk/2;i++){
	gecici =str_arr[i];
	str_arr[i]= str_arr[uzunluk-1-i];
	str_arr[uzunluk-1-i]= gecici;
	
	}
}
