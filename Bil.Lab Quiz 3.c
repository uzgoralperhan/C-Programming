#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;

    printf("Karakter giriniz: ");
    scanf(" %c",&karakter);

    if(karakter>='0'&&karakter<='9')
        printf("Karakter rakam\n");
    else if(karakter>='!'&&karakter<='?')
        printf("Ozel karakter\n");
    else
        switch(karakter)
        {
            case 'A':
                printf("Sesli harf\n");
                break;

            case 'a':
                printf("Sesli harf\n");
                break;

            case 'E':
                printf("Sesli harf\n");
                break;

            case 'e':
                printf("Sesli harf\n");
		break;

            case 'I':
                printf("Sesli harf\n");
                break;

            case 'i':
                printf("Sesli harf\n");
                break;

            case 'O':
                printf("Sesli harf\n");
                break;

            case 'o':
                printf("Sesli harf\n");
                break;

            case 'U':
                printf("Sesli harf\n");
                break;

            case 'u':
                printf("Sesli harf\n");
                break;

            default:
                printf("Sessiz harf\n");
                break;
        }

    return 0;
}
