#include <stdio.h>
#include <stdlib.h>
#define alper 12

int main()
{
    int n;
    int dizi[alper][alper];
    printf("Lutfen Kac Sutunluk Bir Matris Olusturacaginizi Giriniz : ");
    scanf("%d",&n);
    printf("\n\np ");
    for(int i=0; i<n; i++)
    {
        printf("%4d",i);
    }
    printf("\nn\n");
    for(int i=0; i<=n; i++)
    {
        printf("----");
    }
    printf("\n");

    for(int i=0; i<n; i++)
    {
        dizi[i][i]=1;
        dizi[i][0]=1;
        for(int j=1; j<i; j++)
        {
            dizi[i][j]=dizi[i-1][j]+dizi[i-1][j-1];
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d--",i);
        for(int j=0; j<=i; j++)
        {
            printf("%4d",dizi[i][j]);
        }
        printf("\n");
    }

    return 0;
}
