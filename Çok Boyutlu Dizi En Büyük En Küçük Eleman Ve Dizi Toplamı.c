#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min=0,max=0,toplam=0;
    int matris[3][2];
    printf("Dizi Elemanlarini Giriniz...\n\n\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d 'nci Satir %d 'nci Sutun Elemani Giriniz : ",i+1,j+1);
            scanf("%d",&matris[i][j]);
        }
    }

    printf("\n-----------Dizi Elemanlari-----------\n\n");
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",matris[i][j]);
        }
        printf("\n");
    }

    max=matris[0][0];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
           if(matris[i][j]>max)
           {
               max=matris[i][j];
           }
        }
    }

    min=matris[0][0];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
           if(matris[i][j]<min)
           {
               min=matris[i][j];
           }
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
           toplam=toplam+matris[i][j];
        }
    }

    printf("\nMatrisin En Buyuk Elemani : %d 'dir.\n",max);
    printf("\nMatrisin En Kucuk Elemani : %d 'dir.\n",min);
    printf("\nMatris Elemanlari Toplami : %d 'dir.\n",toplam);

    return 0;
}
