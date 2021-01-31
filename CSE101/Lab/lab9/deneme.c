#include <stdio.h>
#include <string.h>

int main ()
{
  char str1[]="Benim adim silo";
  char str2[40];
  char str3[40];
  strcpy (str2,str1);
  strcpy (str3,"basariyla kopyalandi");
  printf ("str1: %s\nstr2: %s\nstr3: %s\n",str1,str2,str3);
  return 0;
}