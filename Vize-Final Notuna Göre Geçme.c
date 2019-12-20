#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ders_adi[30];
    int vize=0, finl=0;
    float sonuc=0;

    printf("Ders Adini Giriniz : ");
    scanf("%s",ders_adi);

    printf("Vize Notunu Giriniz : ");
    scanf("%d",&vize);

    printf("Final Notunu Giriniz : ");
    scanf("%d",&finl);

    sonuc = (0.4*vize) + (0.6*finl);
    if(sonuc >= 60)
    {
        printf("%s dersini %f ortalama ile gectiniz.",ders_adi,sonuc);
    }
    else{
        printf("%s dersinden %f ortalama ile kaldiniz.",ders_adi,sonuc);
    }
}
