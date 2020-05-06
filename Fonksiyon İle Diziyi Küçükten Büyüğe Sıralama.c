#include <stdio.h>
#include <stdlib.h>

void sirala(int dizi[],int kac)
{
    int gecici;
    for(int i=0; i<kac-1; i++)
    {
        for(int j=0; j<kac-1-i; j++)
        {

            if(dizi[j]>dizi[j+1])
            {
                gecici=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=gecici;
            }

        }


    }

}

int main()
{
    int n;
    printf("Kac Adet Sayi Uretilecek : ");
    scanf("%d",&n);
    int dizi[100];
    srand(time(0));
    for(int i=0; i<n; i++)
    {
        dizi[i]=rand()%100;
        printf("%d\t",dizi[i]);
    }

    printf("\n\nDizinin Sirali Hali \n\n");
    sirala(dizi,n);
    for(int i=0; i<n; i++)
    {
        printf("%d\t",dizi[i]);
    }

    return 0;
}
