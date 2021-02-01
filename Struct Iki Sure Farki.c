#include <stdio.h>
#include <stdlib.h>

 struct zaman{
    int saniye;
    int dakika;
    int saat;
    };


   void  fark(struct zaman t1,struct zaman t2,struct zaman *farki)
   {
       if(t2.saniye>t1.saniye)
       {
           --t1.dakika;
           t1.saniye+=60;
       }
       farki->saniye=t1.saniye-t2.saniye;
       if(t2.dakika>t1.dakika)
       {
           --t1.saat;
           t1.dakika+=60;
       }
       farki->dakika=t1.dakika-t2.dakika;
       farki->saat=t1.saat-t2.saat;



   }
/* Kullanıcı tarafından başlangıç ve bitiş zamanları saat,dakika ve saniye şeklinde girilmektedir.
    Buna göre aşağıda kullanılan yapı ve fonksiyon kullanılarak iki zaman dilimi arasındaki farkı
    hesaplayan C programını yazınız.*/
   /* void fark (struct zaman t1,struct zaman t2,struct zaman *farki);*/
int main()
{

    struct zaman t1,t2,frk;

    printf("Baslangic zamani (saat,dakika,saniye)");
    scanf("%d%d%d",&t1.saat,&t1.dakika,&t1.saniye);

    printf("Bitis zamani (saat,dakika,saniye)");
    scanf("%d%d%d",&t2.saat,&t2.dakika,&t2.saniye);

    fark(t1,t2,&frk);

    printf("\n Zaman farki : %d %d %d -",t1.saat,t1.dakika,t1.saniye);
    printf("%d %d %d ",t2.saat,t2.dakika,t2.saniye);
    printf("= %d %d %d ",frk.saat,frk.dakika,frk.saniye);






    return 0;
}
