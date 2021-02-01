#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personel{

    int sifre;
    char ad[10];
    char soyad[10];
    int yas;
    float maas;
    char cinsiyet[10];

    }kisiler;


 void sirala(kisiler x[],int m)
 {
     int i,j;
     kisiler t;
     for(i=0;i<m-1;i++)
     {
         for(j=i+1;j<m;j++)
         {
             if(strcmp(x[i].ad,x[j].ad)>0)
             {
                 t=x[i];
                 x[i]=x[j];
                 x[j]=t;
             }
         }
     }


 }

 void listele(kisiler x[],int m)
 {
     int i;
     for(i=0;i<m;i++)
     {
         printf("%d %s %s %d %f %s\n",x[i].sifre,x[i].ad,x[i].soyad,x[i].yas,x[i].maas,x[i].cinsiyet);
     }

 }


 /*Aşağıda verilen yapıyı kullanarak personel bilgilerinin alınmasını ve alındıktan sonra
    personel adlarına göre a dan z ye alfabetik olarak personel bilgilerinin listelenmesini
    sağlayan C programını yazınız*/
     /*void sirala(kisiler x[],int m);
    void listele(kisiler x[],int m);*/
int main()
{
   int N;
   int i;
   printf("Kac adet personel bilgisi tutulacak\n");
   scanf("%d",&N);
   kisiler p[N];
   for(i=0;i<N;i++)
   {
       printf("Sifre=\n");
       scanf("%d",&p[i].sifre);

       printf("Ad=\n");
       scanf("%s",&p[i].ad);

       printf("Soyad=\n");
       scanf("%s",&p[i].soyad);

       printf("Yas=\n");
       scanf("%d",&p[i].yas);

       printf("Maas=\n");
       scanf("%f",&p[i].maas);

       printf("Cinsiyet=\n");
       scanf("%s",&p[i].cinsiyet);


   }

    sirala(p,N);
    listele(p,N);




    return 0;
}
