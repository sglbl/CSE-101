#include<stdio.h>
const int CITY=2;
const int WEEK=7;

int main()
{
   int temperature[CITY][WEEK];
   int i ,j;

  /*Take input from user*/
   for(i=0;i<CITY;i++)
   {
       for(j=0;j<WEEK;j++)
       {
           printf("City[%d], Day[%d]: ", i+1, j+1);
           scanf("%d", &temperature[i][j] );
       }
       printf("\n");
   }

   /*Display output*/
   printf("Displaying Values:\n\n");

   for(i=0;i<CITY;i++)
   {
       for(j=0;j<WEEK;j++)
       {
           printf("City[%d], Day[%d]=%d\n", i+1, j+1, temperature[i][j]);
       }
       printf("\n");
   }
   
   
   //Calculations
	int ort1=0;
	for(i=0;i<CITY;i++){
		ort1=ort1+temperature[i][3]; //for 4.day
	}
		printf("4.gun ortalama sicaklik %d\n",ort1/i ); // i'yi 2 olarak alýyor.
	
	int ort2=0;
  	for(i=0;i<WEEK;i++){
  		ort2+=temperature[0][i];
  	}
  		printf("Average temp of first city is %d\n",ort2/WEEK);
  		printf("Average temp of first city is %d\n",ort2/i); //Weekle same oluyor.
     
   int ort3=0;
    for(i=0;i<WEEK;i++){
     	ort3+=temperature[1][i];
    }
     	printf("Average temp of second city is %d\n",ort3/WEEK);
  	  printf("Average temp of second city is %d\n",ort3/i); //Weekle same oluyor.
     

   return 0;
}
