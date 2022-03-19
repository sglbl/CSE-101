#include <stdio.h>
void print_reverse(char str[]);

int main()
{
	char str[100];
	
	printf("Please enter a string: ");
	scanf("%s", str);
	
	
	printf("Reverse of the string is: ");
		print_reverse(str);  //function
	printf("\n");
}

void print_reverse(char str[])
{

	if(str[0] != '\0')
	{
		print_reverse(str+1);	
	}
	printf("%c",str[0]);
	
}
