#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi)
{

    int fak=1;
    for(int i=1; i<=sayi; i++)
    {

        fak=fak*i;

    }
    printf("\n");
    printf("Faktoriyel : %d \n",fak);



}


int main()
{
    int sayi;
    printf("Lutfen Bir Sayi Giriniz : ");
    scanf("%d",&sayi);

    faktoriyel(sayi);



    return 0;
}
