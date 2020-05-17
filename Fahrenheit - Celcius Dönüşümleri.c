#include <stdio.h>
#include <stdlib.h>

float celciusToFahrenhayt(float deger)
{
    float fahrenhayt;
    fahrenhayt=(1.8*deger)+32;
    return fahrenhayt;
}
float FahrenhaytToCelcius(float deger)
{
    float celcius;
    celcius=(5.0/9)*(deger-32);
    return celcius;
}

int main()
{
    int secim;
    float deger;
    printf("Lutfen Bir Secim Yapiniz\n\n");
    printf("------------------\n");
    printf("1-Celcius Degerini Fahrenhayta Cevirmek Icin 1'e Basiniz\n");
    printf("2-Fahrenhayt Degerini Celcius'a Cevirmek Icin 2'e Basiniz\n");
    printf("------------------\n\n");
    printf("Seciminiz : ");
    scanf("%d",&secim);
    printf("Lutfen Bir Deger Giriniz : ");
    scanf("%f",&deger);

    switch(secim)
    {
    case 1:
        printf("\n\n%.1f Celcius = %.1f Fahrenhayt\n\n",deger,celciusToFahrenhayt(deger));
        break;

    case 2:
        printf("\n\n%.1f Fahrenhayt = %.1f Celcius\n\n",deger,FahrenhaytToCelcius(deger));
        break;

    default:
        printf("Yanlis Bir Secim Yaptiniz!!");
        break;

    }

    return 0;
}
