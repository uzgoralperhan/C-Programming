#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int s,b,b2;

    printf("Karenin kenar uzunlugunu giriniz: ");
    scanf("%d",&s);
    printf("\n");

    b=0;
    b2=s-2;

    for(i=0;i<s;i++){

        for(j=0;j<b;j++)
            printf(" ");

        printf("*");

        for(j=0;j<b2;j++)
            printf(" ");

        if(i!=s/2)
            printf("*");

        if(i<s/2){
            b++;
            b2-=2;
        }else{
            b--;
            b2+=2;
        }

        printf("\n");
    }

    return 0;
}
