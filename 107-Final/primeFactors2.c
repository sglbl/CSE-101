#include <stdio.h>
#include <stdlib.h>
//Suleyman GOLBOL
//1801042656

int m=0; //global variable
int* PrimeFactors(int *array, int size){

    int i,j,isPrime,isSame,a=0;
    int *result=malloc(sizeof(int)*10*size);

    for(a=0;a<size;a++){
        for(i=2; i<=array[a]; i++)
        {
            // Check 'i' for factor of num 
            if(array[a]%i==0)
            {
                // Check 'i' for Prime 
                isPrime = 1;
                for(j=2; j<=i/2; j++)
                {
                    if(i%j==0)
                    {
                        isPrime = 0;
                        break;
                    }
                }

                 //If 'i' is Prime number and factor of num 
                if(isPrime==1)
                {
                    //If 'i' is already in the array
                    isSame=0;
                    for(int n=0;n<m;n++)
                    {
                        if(i==result[n])
                        {
                            isSame=1;
                            break;
                        }
                    }

                    if(isSame==0)
                        {
                            result[m]=i;
                            //printf("%d ", i);
                            //printf("%d ",result[m]);
                            m++;
                        }
                }
                
            }
        
        }
    
    }
    //printf("\n------------------------\n");
    return result;
}


int main(){
    int size,a;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    int sayilar[size];
    printf("Enter %d numbers:\n",size);
    for(a=0;a<size;a++)
        scanf("%d",&sayilar[a]);
    printf("The numbers that you entered are:");
    for(a=0;a<size;a++)
        printf("%d ",sayilar[a]);
    printf("\n");

    //Calling the function.
    int* outputResult= PrimeFactors(sayilar,size);

    for(int i=0;i<m;i++){
        printf("%d ",outputResult[i]);
    }

    free(outputResult);
    return 0; 

}



    
