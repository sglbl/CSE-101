#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
  char cdizi1[20];
  char cdizi2[20];
  int id1;
} yap1;

int main ()
{
yap1 *yp1;

  yp1 = (yap1*) malloc (sizeof(yap1)); /* 1 */

  strcpy(yp1 -> cdizi1, "Bilgisayar");
  strcpy(yp1 -> cdizi2, "Programlama");
  yp1 -> id1 = 21;  

  printf("%s %s %d", yp1 -> cdizi1, yp1 -> cdizi2, yp1 -> id1);
}
