#include <stdio.h>
#include <stdlib.h>

void tekSayiListele(int sayi)
{

    for(int i=0; i<=sayi; i++)
    {

        if(i%2==1)
        {
            printf("%d\n",i);
        }

    }

}
void ciftSayiListele(int sayi)
{

    for(int i=0; i<=sayi; i++)
    {

        if(i%2==0)
        {
            printf("%d\n",i);
        }

    }

}

int main()
{
    int sayi;
    printf("Lutfen Bir Sayi Giriniz : ");
    scanf("%d",&sayi);
    tekSayiListele(sayi);
    printf("\n\n\n");
    ciftSayiListele(sayi);

    return 0;
}
