#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10];
    int enBuyuk;
    int enKucuk;
    for(int i=0; i<10; i++)
    {
        printf("Lutfen %d 'inci Elemani Giriniz : ",i+1);
        scanf("%d",&dizi[i]);
        printf("-------------------\n");
    }

    enBuyuk=dizi[0];

    for(int i=1; i<10; i++)
    {
        if(enBuyuk<dizi[i])
        {
            enBuyuk=dizi[i];
        }

    }
    printf("Dizinin En Buyuk Elemani %d 'dir.\n\n",enBuyuk);

    enKucuk=dizi[0];

    for(int i=1; i<10; i++)
    {
        if(enKucuk>dizi[i])
        {
            enKucuk=dizi[i];
        }
    }
    printf("Dizinin En Kucuk Elemani %d 'dir.\n\n",enKucuk);



    return 0;
}
