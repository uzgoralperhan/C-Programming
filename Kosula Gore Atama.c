#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ogrenci
{

    char ad[20];
    char soyad[20];
    int no;
    int sinif;
};


int main()
{
    struct ogrenci ogr;

    printf("Lutfen Bir Numara Giriniz ; ");
    scanf("%d",&ogr.no);



    if(ogr.no==2019)
    {
        strcpy(ogr.ad,"Alperhan");
        strcpy(ogr.soyad,"Uzgor");
        ogr.no=2019;
        ogr.sinif=12;
        printf("\n No: %d ",ogr.no);
        printf("\n Ad: %s ",ogr.ad);
        printf("\n No: %s ",ogr.soyad);
        printf("\n No: %d ",ogr.sinif);
    }
    else
    {
        printf("Yanlis Bir No Girdiniz...");
    }



    return 0;
}
