#include <stdio.h>
#include <stdlib.h>

void bolmeIslemi(int bolunen, int bolen)
{
    int kalan,bolum;
    kalan=bolunen%bolen;
    bolum=bolunen/bolen;
    printf("Kalan : %d\n",kalan);
    printf("Bolum : %d",bolum);
}

int main()
{
    int bolunen,bolen;
    printf("Lutfen Bolunen Degerini Giriniz : ");
    scanf("%d",&bolunen);
    printf("Lutfen Bolen Degerini Giriniz : ");
    scanf("%d",&bolen);
    bolmeIslemi(bolunen,bolen);

    return 0;
}
