#include <stdio.h>
#include <stdlib.h>

void yerDegistir(int a,int b)
{
    int gecici;

    gecici=a;
    a=b;
    b=gecici;
    printf("\nYer Degistirdikten Sonra X Sayisi : %d  Y Sayisi : %d \n",a,b);
}



int main()
{
    int x;
    int y;
    printf("Lutfen X Degerini Giriniz : ");
    scanf("%d",&x);
    printf("Lutfen Y Degerini Giriniz : ");
    scanf("%d",&y);
    printf("\nYer Degistirmeden Once X Sayisi : %d  Y Sayisi : %d \n\n",x,y);
    yerDegistir(x,y);

    return 0;
}
