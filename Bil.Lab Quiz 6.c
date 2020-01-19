#include <stdio.h>
#include <stdlib.h>

int SeriHesapla(int a,int b, int c){

    int i;
    int j=a;
    int k=b;
    int sonuc1;
    int sonuc2=0;

    printf("Serinin Terimleri: ");

    for(i=1;i<c;i++){

        if(i==1){

            sonuc1=(1+1)*(1+1);
            printf("%d + ",sonuc1);
            sonuc2+=sonuc1;
        }

        sonuc1=(1+a)*(1+b);
        sonuc2+=sonuc1;

        printf("%d + ",sonuc1);

        a=a*j;
        b=b*k;
    }

    printf("\n");

    return sonuc2;
}

int main()
{
    int a,b,c;

    printf("a: ");
    scanf("%d",&a);

    printf("b: ");
    scanf("%d",&b);

    printf("c: ");
    scanf("%d",&c);

    printf("ToplamSonuc: %d\n",SeriHesapla(a,b,c));

    return 0;
}
