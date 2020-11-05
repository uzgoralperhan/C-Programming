#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void hosgeldinizfonk()
{
    printf("Bilgi Yarismasina Hosgeldiniz!\nLutfen kurallari okuyunuz...\n\n");
    printf("1-Yarismamiz puan sistemlidir...\n");
    printf("2-Lutfen kullanici adiniz dogru bir sekilde giriniz...\n");
    printf("3-Eger kayitli degilseniz uye olunuz...\n");

}

int secimfonk()
{
    int secim;
    printf("Lutfen asagida ki seceneklerden birini seciniz...\n");
    printf("1-Giris Yap\n");
    printf("2-Kayit Ol\n");
    scanf("%d",&secim);
    return secim;
}

int girisYapfonk(char isim[20],char sifre[20])
{
    char alinanisim[20];
    char alinansifre[20];

    int kontrol=0;
    while(kontrol==0)
    {
    printf("Lutfen Adinizi Giriniz : \n");
    scanf("%s",&alinanisim);
    printf("Lutfen Sifrenizi Giriniz : \n");
    scanf("%s",&alinansifre);
    if(strcmp(isim,alinanisim)==0 &&strcmp(sifre,alinansifre)==0)
    {
        printf("Sisteme Hosgeldiniz\n\n");
        kontrol=1;
    }
    else
    {
        printf("Hatali Giris!\n\n");
    }
    }
}

int kayitOlfonk()
{
    char isim[20];
    char sifre[20];
    printf("Lutfen Bir Isim Giriniz : \n");
    scanf("%s",&isim);
    printf("Lutfen Bir Sifre Giriniz : \n");
    scanf("%s",&sifre);
    printf("Kaydiniz Basarili Bir Sekilde Yapilmistir.\n");
    printf("Giris Ekranina Yonlendiriliyorsunuz...\n");
    girisYapfonk(isim,sifre);
}
int bilgiYarismasi()
{
    char cevap[1];
    int puan=0;
    printf("Yarisma Basladi...\n");
    printf("Puaniniz : %d\n",puan);
    if(puan==0)
    {
    printf("{Soru-1}->Asagidakilerden hangisi Turkiye Cumhuriyetinin baskentidir?\n");
    printf("a-Istanbul  b-Ankara  c-Bursa  d-Edirne  e-Izmir\n");
    scanf("%s",&cevap);
    if(strcmp(cevap,"b")==0)
    {

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
    }
    else
    {
        printf("Yanlis Cevap...\n");
        printf("Puaniniz : %d \n",puan);
    }
    }
    if(puan==10)
    {
    printf("{Soru-2}->Asagidakilerden hangisi Rusyanin baskentidir?\n");
    printf("a-Moskova  b-Berlin  c-Hakkari  d-Zenit  e-Varsova\n");
    scanf("%s",&cevap);
    if(strcmp(cevap,"a")==0)
    {

        printf("Dogru Cevap...\n");
        puan+=10;
        printf("Puaniniz : %d \n",puan);
    }
    else
    {
        printf("Yanlis Cevap...\n");
        printf("Puaniniz : %d \n",puan);
    }
    }

    return puan;
}

int main()
{
    char isim[20]="alperhan";
    char sifre[20]="1234";

    hosgeldinizfonk();
    int secim=secimfonk();

        if(secim==1)
    {
        girisYapfonk(isim,sifre);

    }
    else if(secim==2)
    {
        kayitOlfonk();

    }

    bilgiYarismasi();





    return 0;
}
