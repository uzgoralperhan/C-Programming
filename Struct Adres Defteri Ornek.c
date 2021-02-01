#include <stdio.h>
#include <stdlib.h>

typedef struct AdresDefteri
{

    char ad[100];
    char soyad[100];
    char telno[10];
    char adres[200];
    char postakodu[6];

} defter;

int main()
{
    char satir;
    int N;
    printf("Kac Adet Kayit Tutulacak : ");
    scanf("%d",&N);
    scanf("%c",&satir);
    defter iletisim[N];

    for(int i=0; i<N; i++)
    {
        printf("Adi Giriniz : ");
        gets(iletisim[i].ad);
        printf("Soyadi Giriniz : ");
        gets(iletisim[i].soyad);
        printf("Tel No Giriniz : ");
        gets(iletisim[i].telno);
        printf("Adres Giriniz : ");
        gets(iletisim[i].adres);
        printf("Posta Kodu Giriniz : ");
        gets(iletisim[i].postakodu);

    }

    printf("ADI\tSOYADI\tADRES\tPOSTA KODU\n");
    printf("-------------------------------\n");

    for(int i=0; i<N; i++)
    {
        printf("%s \t %s \t %s \t %s \t %s\n",iletisim[i].ad,iletisim[i].soyad,iletisim[i].telno,iletisim[i].adres,iletisim[i].postakodu);

    }

    return 0;
}
