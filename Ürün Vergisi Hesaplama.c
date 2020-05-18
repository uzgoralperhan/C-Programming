#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    int fiyat;
    float sonFiyat;

    printf("Urun Vergisi Hesaplamaya Hosgeldiniz\n");
    printf("*****************************************\n");
    printf("Hesaplamak Istediginiz Urun Icin Gereken Tusa Basiniz\n");
    printf("Kitap Icin 0 'a Basiniz.\n");
    printf("Temel Gida Icin 1 'e Basiniz.\n");
    printf("Luks Urun Icin 2 'ye Basiniz.\n");
    printf("*****************************************\n");
    printf("Seciminiz : ");
    scanf("%d",&secim);

    switch(secim)
    {

    case 0:
        printf("Lutfen Urunun Fiyatini Giriniz : ");
        scanf("%d",&fiyat);
        sonFiyat=fiyat*(0.04)+fiyat;
        printf("\nUrunun Son Fiyati %.2f 'dir.\n",sonFiyat);
        break;

    case 1:
        printf("Lutfen Urunun Fiyatini Giriniz : ");
        scanf("%d",&fiyat);
        sonFiyat=fiyat*(0.056)+fiyat;
        printf("\nUrunun Son Fiyati %.2f 'dir.\n",sonFiyat);
        break;

    case 2:
        printf("Lutfen Urunun Fiyatini Giriniz : ");
        scanf("%d",&fiyat);
        sonFiyat=fiyat*(0.196)+fiyat;
        printf("\nUrunun Son Fiyati %.2f 'dir.\n",sonFiyat);
        break;

    default:
        printf("\nYanlis Bir Secim Yaptiniz...\n");

    }

    return 0;
}
