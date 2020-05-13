#include <stdio.h>
#include <stdlib.h>

void ekle(int A[],int siraNo,int sayi,int elemanSayisi)
{
    if(siraNo<=elemanSayisi+1)
    {
        for(int i=elemanSayisi-1; i>=siraNo-1; i--)
        {
            A[i+1]=A[i];
        }

        A[siraNo-1]=sayi;
        printf("Dizimizin Eleman Eklenmis Hali : ");
        for(int i=0; i<=elemanSayisi; i++)
        {
            printf("%d\t",A[i]);

        }
    }

    else
    {
        printf("Gecerli Bir Sira Numarasi Giriniz!");
    }
}

int main()
{
    int n;
    int sirasi;
    int deger;
    printf("Lutfen Kac Adet Sayi Uretilecegini Giriniz : ");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for(int i=0; i<n; i++)
    {
        dizi[i]=rand()%100;
    }

    printf("Hangi Siraya Eleman Eklenecek : ");
    scanf("%d",&sirasi);
    printf("Eklenecek Sayiyi Giriniz : ");
    scanf("%d",&deger);
    ekle(dizi,sirasi,deger,n);

    return 0;
}
