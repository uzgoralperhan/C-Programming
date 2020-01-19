#include <stdio.h>
#include <stdlib.h>

int rakamTopla(int);
int usAlma(int, int);

int main()
{
    int s;
    int us;

    printf("Tam sayi giriniz: ");
    scanf("%d",&s);
    printf("Us giriniz: ");
    scanf("%d",&us);
    printf("Sayinin rakamlari toplaminin %d ussu: %d\n",us,usAlma(rakamTopla(s),us));

    return 0;
}

int rakamTopla(int x){

    if(x==0)
        return 0;

    int toplam=0;

    toplam+=x%10;

    return toplam+rakamTopla(x/10);
}

int usAlma(int x, int y){

    if(y==0)
        return 1;

    return x*usAlma(x, y-1);
}
