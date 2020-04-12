#include <stdio.h>
#include <stdlib.h>

int topla(int a,int b)
{

    int sonuc=a+b;
    return sonuc;

}
int cikar(int a,int b)
{

    int sonuc=a-b;
    return sonuc;

}
int carp(int a,int b)
{

    int sonuc=a*b;
    return sonuc;

}

float bol(float a,float b)
{

    float sonuc=(float)a/b;
    return sonuc;

}
int main()
{
    int sayi1,sayi2;
    printf("Lutfen Birinci Sayiyi Giriniz : ");
    scanf("%d",&sayi1);
    printf("Lutfen Ikinci Sayiyi Giriniz : ");
    scanf("%d",&sayi2);

    printf("%d\n",topla(sayi1,sayi2));
    printf("%d\n",cikar(sayi1,sayi2));
    printf("%d\n",carp(sayi1,sayi2));
    printf("%.2f",bol(sayi1,sayi2));



    return 0;
}
