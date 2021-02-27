#include <stdio.h>
#define N 1
#define M 2
struct urun
{
    char reference_kodu[20];
    float fiyat;
};
struct isci
{
    char soyisim[20];
    char isim[20];
    int yas;
};
struct magaza
{
    char isim[10];
    char sokak_ismi[20];
    char mahalle[12];
    char telefon[15];
    float satis;
    struct isci e1;
    struct isci e2;
    struct isci e3;
    struct urun p[M];
};
void urunu_olustur(struct urun *pr)
{
    printf("Referans kodu girin\n : ");
    scanf("%s",pr->reference_kodu);
    printf("Lutfen fiyati girin\n : ");
    scanf("%f",&pr->fiyat);
}
void isciyi_olustur(struct isci *em)
{
    printf("Iscinin soyadini giriniz\n : ");
    scanf("%s",em->soyisim);
    printf("Iscinin adini giriniz:\n ");
    scanf("%s",em->isim);
    printf("Iscinin yasini giriniz:\n ");
    scanf("%d",&em->yas);
}
void magazayi_olustur(struct magaza *m)
{
    int i;
    printf("Lutfen magazanin ismini girin \n: ");
    scanf("%s",m->isim);
    printf("Lutfen magazanin bulundugu sokak ismini girin\n : ");
    scanf("%s",m->sokak_ismi);
    printf("Magazanin bulundugu mahalle ismi girin \n: ");
    scanf("%s",m->mahalle);
    printf("Magazanin telefon numarasini girin \n: ");
    scanf("%s",m->telefon);
    printf("Satis rakamini girin : \n");
    scanf("%f",&m->satis);
    printf("Isci 1 : \n");
    isciyi_olustur(&m->e1);
    printf("Isci 2 : \n");
    isciyi_olustur(&m->e2);
    printf("Isci 3 : \n");
    isciyi_olustur(&m->e3);
    for ( i = 0; i< M; i++)
    {
        printf("Urunleri giriniz %d : \n",i);
        urunu_olustur(&m->p[i]);
    }
}
void urunu_bas(struct urun p)
{
    printf("\treference kodu : %s\n",p.reference_kodu);
    printf("\tfiyat : %f\n",p.fiyat);
}
void isciyi_bas(struct isci e)
{
    printf("\tIsim : %s\n",e.isim);
    printf("\tSoyisim : %s\n",e.soyisim);
    printf("\tYas : %d\n",e.yas);
}
void magazayi_bas(struct magaza m)
{
    int i;
    printf("Magazanin ismi : %s\n",m.isim);
    printf("Magazananin bulundugu sokak: %s\n",m.sokak_ismi);
    printf(":Magazanin bulundugu mahalle %s\n",m.mahalle);
    printf("Magazanin telefon numarasi : %s\n",m.telefon);
    printf("Satis rakami : %f\n",m.satis);
    printf("Isci 1 :\n");
    isciyi_bas(m.e1);
    printf("Isci 2 :\n");
    isciyi_bas(m.e2);
    printf("Isci 3 :\n");
    isciyi_bas(m.e3);
    for ( i = 0; i< M; i++)
    {
        printf("Urun %d : \n",i);
        urunu_bas(m.p[i]);
    }
}
void en_yasli(struct magaza m)
{
    struct isci yasli;
    if (m.e1.yas >yasli.yas)
        yasli = m.e1;
    if (m.e2.yas >yasli.yas)
        yasli = m.e2;
    if (m.e3.yas >yasli.yas)
        yasli = m.e3;
    printf("En yasli isci:\n");
    isciyi_bas(yasli);
}
void ortalama_fiyat(struct magaza m[N])
{
    int i, j;
    float s;
    for ( i=0; i<N; i++)
    {
        for( j =0; j<M; j++)
        {
            s+=m[i].p[j].fiyat;
        }
        printf(" %s magazasinda yer alan urunlerin ortlama fiyati :   %f\n",m[i].isim,(float) s/M);
    }
}
void bulundugu_mahalle(struct magaza m[N], char q[12])
{
    int i;
    for ( i = 0; i<N; i++)
    {
        if(stricmp(m[i].mahalle,q)==0)
            printf("%s mahallesinde %s magazasi bulunur \n", m[i].mahalle, m[i].isim);
    }
}

int main()
{
    struct magaza m[N];
    int i;
    for(i=0; i<N; i++)
    {
        printf("Magaza %d :\n",i);
        magazayi_olustur(&m[i]);
    }
    for(i=0; i<N; i++)
    {
        printf("magasin %d :\n",i);
        magazayi_bas(m[i]);
    }
    en_yasli(m[0]);
    ortalama_fiyat(m);
    bulundugu_mahalle(m, "sisli");

    return 0;
}
