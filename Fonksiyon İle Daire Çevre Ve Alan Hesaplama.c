#include <stdio.h>
#include <stdlib.h>
#define pisayisi 3.14

void AlanVeCevreHesapla(float yaricap)
{

    float alan= pisayisi*(yaricap*yaricap);
    float cevre= 2*pisayisi*yaricap;
    printf("\n");
    printf("Dairenin Alani : %.2f'dir.\n",alan);
    printf("Dairenin Cevresi : %.2f'dir.\n",cevre);
}

int main()
{
    float yaricap;
    printf("Lutfen Dairenin Yaricapini Giriniz : ");
    scanf("%f",&yaricap);

    AlanVeCevreHesapla(yaricap);


    return 0;
}
