#include <stdio.h>
#include <stdlib.h>

void floyd (int n)
{

    int i=1;
    int j;
    int a=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("%d  ",a);
            a++;
            j++;
        }
        printf("\n");
        i++;
    }
}

int main()
{
    int satir;
    printf("Lutfen Satir Sayisini Giriniz : ");
    scanf("%d",&satir);
    floyd(satir);

    return 0;
}
