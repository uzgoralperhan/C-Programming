#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim;
    int yatirilacakTutar;
    int cekilecekTutar;
    int bakiye=1000;

    while(secim)
    {
        printf("1-Bakiye Miktari\n");
        printf("2-Para Yatir\n");
        printf("3-Para Cek\n");
        printf("0-Cikis\n");
        printf("Lutfen Bir Secim Yapiniz : ");
        scanf("%d",&secim);
        switch(secim)
        {
        case 0:
            break;
        case 1:
            printf("Bakiyeniz : %d\n",bakiye);
            break;
        case 2:
            printf("Lutfen Yatirmak Istediginiz Tutari Giriniz : \n");
            scanf("%d",&yatirilacakTutar);
            printf("Yatirma islemi basarili.\n");
            bakiye=bakiye+yatirilacakTutar;
            printf("Son Bakiyeniz : %d\n",bakiye);
            break;
        case 3:
            printf("Lutfen Cekmek Istediginiz Tutari Giriniz : \n");
            scanf("%d",&cekilecekTutar);
            if(cekilecekTutar>bakiye)
            {
                printf("Bakiyeden Yuksek Bir Tutar Girdiniz!\n");
            }
            else
            {
                printf("Cekme islemi basarili.\n");
                bakiye=bakiye-cekilecekTutar;
                printf("Son Bakiyeniz : %d\n",bakiye);

            }
            break;
        default:
            printf("Yanlis Bir Secim Yaptiniz!\n");
            break;
        }

    }


    return 0;
}
