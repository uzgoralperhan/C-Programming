#include <stdio.h>
#include <stdlib.h>

int toplam(int sayi)
{

    if(sayi==0){
        return 0;
    }
    else
    {
        return sayi+toplam(sayi-1);
    }

}

int main()
{
    int sayi;
    printf("Bir Sayi Giriniz : ");
    scanf("%d",&sayi);
    printf("------------------\n\n\n");
    printf("%d ye kadar olan sayilarin toplami %d dir.\n\n\n",sayi,toplam(sayi));


    return 0;
}
