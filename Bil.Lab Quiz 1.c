#include <stdio.h>
#include <stdlib.h>

int main()
{
   float yaricap,cevre,alan;
   float pi=3.14;
   printf("Dairenin yaricapini giriniz : ");
   scanf("%f",&yaricap);

   cevre=2*pi*yaricap;
   alan=pi*yaricap*yaricap;

   printf("Dairenin Alani : %f\n",alan);
   printf("Dairenin Cevresi : %f\n",cevre);

   if(cevre>alan){

    printf("Dairenin Cevresi Alanindan Daha Buyuktur.");

 }
   else if(alan>cevre){

    printf("Dairenin Alani Cevresinden Daha Buyuktur.");

   }

   else
    printf("Daire Ve Alanin Cevresi Esittir.");



    return 0;
}
