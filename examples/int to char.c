// Print digits from 7 down to 1
#include <stdio.h>
int main(){
	
int a = 7;
while (a)
{
    printf("%c\n", a + '0');
    a--;
}
printf("All done...\n");
return 0;
}
