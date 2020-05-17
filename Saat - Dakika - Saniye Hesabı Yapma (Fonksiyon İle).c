#include <stdio.h>
#include <stdlib.h>

void saniyeyiCevir(int saniye)
{
    int saat;
    int dakika;
    int sn;
    int zaman;

    saat=saniye/3600;
    zaman=saniye%3600;
    dakika=zaman/60;
    sn=zaman%60;
    printf("------------------\n");
    printf("%d:%d:%d",saat,dakika,sn);
    printf("\n------------------\n");

}

int main()
{
    int saniye;
    printf("Lutfen Saniye Degerini Giriniz : ");
    scanf("%d",&saniye);
    saniyeyiCevir(saniye);

    return 0;
}
