#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sayi;
    float toplam=0;
    printf("Lutfen Bir Sayi Giriniz : ");
    scanf("%f",&sayi);

    for(int i=1; i<=sayi; i++)
    {
        toplam=(1.0/i)+toplam;

    }

    printf("Serinin Toplami : %.2f ",toplam);

    return 0;
}
