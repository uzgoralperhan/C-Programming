#include <stdio.h>
#include <stdlib.h>

int mukemmelSayiMi(int n)
{
    int toplam=0;
    int i=1;
    while(i<n)
    {
        if(n%i==0)
        {
            toplam=toplam+i;
        }

        i++;
    }

    if(toplam==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int sayi;
    int sonuc;
    printf("Lutfen Bir Sayi Giriniz : ");
    scanf("%d",&sayi);
    sonuc=mukemmelSayiMi(sayi);
    if(sonuc==1)
    {
        printf("Girdiginiz Sayi Mukemmel Sayidir.\n");
    }
    else
    {
        printf("Girdiginiz Sayi Mukemmel Sayi Degildir.\n");
    }

    return 0;
}
