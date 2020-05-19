#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    printf("%4c",'I');

    for(int i=1; i<=N; i++)
    {
        printf("%4d",i);
    }
    printf("\n");
    printf("-------");
    for(int i=1; i<=N; i++)
    {
        printf("----");
    }
    printf("\n");
    for(int i=1; i<=N; i++)
    {
        printf("%4d",i);
        for(int j=1; j<=N; j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }

    printf("\n\n");

    return 0;
}
