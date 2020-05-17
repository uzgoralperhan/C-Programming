#include <stdio.h>
#include <stdlib.h>

void seriHesapla(int sayi)
{
    int hesapla;
    int topla=0;
    printf("\n\n\n");
    for(int i=1; i<=sayi; i++)
    {
        hesapla=i*i;
        topla=hesapla+topla;
        if(i==sayi)
        {
            printf(" %d^2 ",i);
        }
        else
        {
            printf(" %d^2 + ",i);
        }

    }

    printf(" = %d \n\n\n",topla);


}


int main()
{
    int sayi;
    printf("Lutfen Hesaplanacak Seri Icin Bir Deger Giriniz : ");
    scanf("%d",&sayi);

    seriHesapla(sayi);

    return 0;
}
