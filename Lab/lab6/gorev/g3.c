#include <stdio.h>
int main()
{
  int n,i=1,toplam=0;

  printf("sayi gir. ");
  scanf("%d",&n);

  while(i<n){
   		if(n%i==0){
     		toplam=toplam+i;
        }
    i++;
  }
  
  if(toplam==n)
    printf("%d mükemmel sayi",n);
  else
    printf("%d mükemmel sayi değil.",n);
  
  return 0;
}
