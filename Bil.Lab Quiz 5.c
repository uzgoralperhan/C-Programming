#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int s1,s2;

    printf("Satir sayisini giriniz: ");
    scanf("%d",&s1);
    printf("Sutun sayisini giriniz: ");
    scanf("%d",&s2);
    printf("\n");

    for(i=1;i<=s1;i++){

        for(j=1;j<=s2;j++){

            if(i==1||i==s1){

                if(j==1||j==s2)
                    printf("0");
                else
                    printf("1");
            }
            else{
                if(j==1||j==s2)
                    printf("1");
                else
                    printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}
