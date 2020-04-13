#include <stdio.h>
#include <stdlib.h>

int usHesaplama(int taban,int us)
{
    int sonuc=1;
    for(int i=1; i<=us; i++)
    {

        sonuc=sonuc*taban;

    }

    return sonuc;

}

int main()
{

    int taban;
    int us;
    printf("Lutfen Bir Taban Degeri Giriniz : ");
    scanf("%d",&taban);
    printf("Lutfen Bir Us Degeri Giriniz : ");
    scanf("%d",&us);

    printf("Sonuc : %d",usHesaplama(taban,us));

    return 0;
}
