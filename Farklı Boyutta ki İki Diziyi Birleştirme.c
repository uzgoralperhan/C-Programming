#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boyut1;
    printf("Lutfen 1.Dizinin Boyutunu Giriniz : ");
    scanf("%d",&boyut1);
    int dizi1[boyut1];
    printf("-------------------------------\n");
    printf("Lutfen 1.Dizinin Elemanlarini Giriniz\n");
    printf("-------------------------------\n");
    for(int i=0; i<boyut1; i++)
    {
        scanf("%d",&dizi1[i]);
    }
    printf("\n");
    for(int i=0; i<boyut1; i++)
    {
        printf("%d.Indis %d \t",i+1,dizi1[i]);
    }
    printf("\n");

    int boyut2;
    printf("Lutfen 2.Dizinin Boyutunu Giriniz : ");
    scanf("%d",&boyut2);
    int dizi2[boyut2];
    printf("-------------------------------\n");
    printf("Lutfen 2.Dizinin Elemanlarini Giriniz\n");
    printf("-------------------------------\n");
    for(int i=0; i<boyut2; i++)
    {
        scanf("%d",&dizi2[i]);
    }
    printf("\n");
    for(int i=0; i<boyut2; i++)
    {
        printf("%d.Indis %d \t",i+1,dizi2[i]);
    }
    printf("\n");

    int dizi3[boyut1+boyut2];
    int sayac=0;
    for(int i=0; i<boyut1; i++)
    {
        dizi3[sayac]=dizi1[i];
        sayac++;
    }

    for(int i=0; i<boyut2; i++)
    {
        dizi3[sayac]=dizi2[i];
        sayac++;
    }
    printf("-------------------------------\n");
    printf("\nIki Diziyi Birlestirdik...\n\n");
    printf("-------------------------------\n");
    for(int i=0; i<boyut1+boyut2; i++)
    {
        printf("%d.Indis %d \t",i+1,dizi3[i]);
    }

    printf("\n\n");

    return 0;
}
