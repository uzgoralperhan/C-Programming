#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi)
{
    if(sayi==1)
    {
        return 1;
    }
    else
    {
        return sayi*faktoriyel(sayi-1);
    }
}


int main()
{

    int sayi;
    printf("Lutfen Bir Sayi Giriniz : ");
    scanf("%d",&sayi);
    printf("%d Faktoriyeli = %d ",sayi,faktoriyel(sayi));

    return 0;
}
