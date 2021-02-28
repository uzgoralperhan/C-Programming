#include <stdio.h>
#include <stdlib.h>


int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
     else if(n==1)
    {
        return 1;
    }
    else
    {
        return(fibonacci(n-2)+fibonacci(n-1));
    }

}





int main()
{

 /*  FİBONACCİ DİZİSİ NEDİR: Fibonacci dizisi, 0 ve 1 ile başlayan
   ve her sayının kendisinden önce gelen iki sayının toplanması ile elde edildiği bir sayı dizisidir.
   Buna göre klavyeden kaç adet fibonacci sayısı üretileceği bilgisi girilerek sayıların üretilmesini
   sağlayan C programını recursive fonksiyon kullanarak yazınız.*/

   int sayi,i;
   printf("Kac adet sayi uretilecek\n");
   scanf("%d",&sayi);
   for(i=0;i<sayi;i++)
   {
       printf("%d\n",fibonacci(i));
   }

    return 0;
}
