#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1,sayi2;
    printf("Lutfen 1.Sayiyi Giriniz : ");
    scanf("%d",&sayi1);
    printf("Lutfen 2.Sayiyi Giriniz : ");
    scanf("%d",&sayi2);

    if(sayi1>0&&sayi2>0)
    {
        printf("Carpimlar Pozitiftir.");
    }
    else if(sayi1==0&&sayi2>0||sayi2==0&&sayi1>0)
    {
        printf("Carpimlar Sifirdir.");
    }
    else if(sayi1<0&&sayi2==0||sayi2<0&&sayi1==0)
    {
        printf("Carpimlar Sifirdir.");
    }
    else if(sayi1<0&&sayi2<0)
    {
        printf("Carpimlar Pozitiftir.");
    }
    else if(sayi1==0&&sayi2==0)
    {
        printf("Carpimlar Sifirdir.");
    }
    else
    {
        printf("Carpimlar Negatiftir.");

    }

    return 0;
}
