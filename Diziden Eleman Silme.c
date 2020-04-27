#include <stdio.h>
#include <stdlib.h>

void diziElemanSil(int a[],int sira,int boyut)
{
    if(sira>=boyut+1)
    {
        printf("Lutfen Gecerli Bir Sira No Giriniz !");
    }
    else
    {

        for(int i=sira-1; i<boyut-1; i++)
        {
            a[i]=a[i+1];
        }
        printf("Kayit Basariyla Silindi...\n");

        for(int i=0; i<boyut-1; i++)
        {
            printf("%d\t",a[i]);

        }

    }



}

int main()
{

    int n;
    int sirano;
    printf("Kac Adet Sayi Uretilecek : ");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for(int i=0; i<n; i++)
    {
        dizi[i]=rand()%100;
        printf("%d\t",dizi[i]);

    }

    printf("\n");
    printf("\n");

    printf("Diziden Silinecek Degerin Sira No'sunu Giriniz : ");
    scanf("%d",&sirano);
    diziElemanSil(dizi,sirano,n);

    return 0;
}
