#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[2][2];
    int dizi2[2][2];
    int dizi3[2][2];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Dizi elemanini giriniz : ");
            scanf("%d",&dizi1[i][j]);
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Dizi elemanini giriniz : ");
            scanf("%d",&dizi2[i][j]);
        }
    }

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            dizi3[i][j]=dizi1[i][j]+dizi2[i][j];


        }

    }
     for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\t",dizi1[i][j]);


        }
        printf("\n");

    }
     for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\t",dizi2[i][j]);


        }
        printf("\n");

    }


    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\t",dizi3[i][j]);


        }
        printf("\n");

    }





    return 0;
}
