#include <stdio.h>
#include <stdlib.h>

int enBuyuk (int a[],int elemanSayisi)
{
    int enb;
    enb=a[0];
    for(int i=1; i<elemanSayisi; i++)
    {
        if(a[i]>enb)
        {
            enb=a[i];
        }
    }

    return enb;

}

int enKucuk (int a[],int elemanSayisi)
{
    int enk;
    enk=a[0];
    for(int i=1; i<elemanSayisi; i++)
    {
        if(a[i]<enk)
        {
            enk=a[i];
        }
    }

    return enk;

}

int main()
{
    int n;
    printf("Kac Adet Sayi Uretilecek : ");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    printf("Dizi Elemanlari : \n");

    for(int i=0; i<n; i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    printf("En Buyuk : %d\n",enBuyuk(dizi,n));
    printf("En Kucuk : %d\n",enKucuk(dizi,n));

    return 0;
}
