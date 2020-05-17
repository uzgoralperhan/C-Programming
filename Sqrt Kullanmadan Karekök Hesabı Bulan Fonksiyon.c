#include <stdio.h>
#include <stdlib.h>

double karekokBul(double N)
{
    double karekok;

    if(N>0.0)
    {
        karekok=N/2;
        for(int i=0; i<N; i++)
        {
            karekok=((karekok*karekok)+N)/(2*karekok);
        }

        return karekok;
    }
    else if(N==0.0)
    {
        return 0;
    }
    else
    {
        printf("Lutfen Gecerli Bir Sayi Giriniz!");
    }
}

int main()
{
    double sayi;
    printf("Lutfen Karekoku Alinacak Sayiyi Giriniz : ");
    scanf("%lf",&sayi);
    printf("\n\n%.2lf Karekoku : %.2lf \n\n",sayi,karekokBul(sayi));

    return 0;
}
