#include <stdio.h>
#include <stdlib.h>

int main()
{
    float kilo;
    float boy;
    float endeks;

    printf("Kilo degerinizi giriniz (kg): ");
    scanf("%f",&kilo);
    printf("Boy degerinizi giriniz (m): ");
    scanf("%f",&boy);
    printf("\n");

    endeks=kilo/(boy*boy);
    printf("Vucut kitle endeksiniz: %f\n",endeks);

    if(endeks>0&&endeks<18.5)
        printf("Ideal kilonuzun altindasiniz\n");
    else if(endeks>=18.5&&endeks<25)
        printf("Kilonuz tamamen normal\n");
    else if(endeks>=25)
        printf("Ideal kilonuzun ustundesiniz\n");
    else
        printf("Hatali deger girdiniz!\n");

    return 0;
}
