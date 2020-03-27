#include <stdio.h>
#include <stdlib.h>

int main()
{

    int secim;
    float sayi1;
    float sayi2;
    printf("Lutfen birinci sayiyi giriniz : ");
    scanf("%f",&sayi1);
    printf("Lutfen ikinci sayiyi giriniz : ");
    scanf("%f",&sayi2);
    printf("iki sayi arasinda hangi islemi yapmak istersiniz : \n\n");
    printf("Toplama icin 1'e basiniz\n\n");
    printf("Cikarma icin 2'e basiniz\n\n");
    printf("Carpma icin 3'e basiniz\n\n");
    printf("Bolme icin 4'e basiniz\n\n");
    scanf("%d",&secim);

    switch(secim)
    {

    case 1:
        printf("iki sayi toplami %.2f dir.",sayi1+sayi2);
        break;
    case 2:
        printf("iki sayi cikarmasi %.2f dir.",sayi1-sayi2);
        break;
    case 3:
        printf("iki sayi carpimi %.2f dir.",sayi1*sayi2);
        break;
    case 4:
        printf("iki sayi bolumu %.2f dir.",sayi1/sayi2);
        break;
    default :
        printf("Yanlis bir secim yaptiniz !!");
        break;


    }

    return 0;
}
