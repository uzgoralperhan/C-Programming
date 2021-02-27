#include <stdio.h>
#include <stdlib.h>
#define N 100
typedef struct
{

    char ilac_adi[20];
    int adet;
    int fiyat;

} data;

int main()
{

    data veriler[N];
    for(int i=0; i<N; i++)
    {
        fflush(stdin);
        printf("Lutfen Ilac Adini Giriniz : ");
        gets(veriler[i].ilac_adi);
        printf("Lutfen Ilac Adedini Giriniz : ");
        scanf("%d",&veriler[i].adet);
        printf("Lutfen Ilac Fiyatini Giriniz : ");
        scanf("%d",&veriler[i].fiyat);

    }

    printf("Ilac Adi\n");
    printf("--------------\n");
    for(int i=0;i<N;i++){
        if(veriler[i].adet<=20){
            printf("%s\n",veriler[i].ilac_adi);
        }
    }


    return 0;
}
