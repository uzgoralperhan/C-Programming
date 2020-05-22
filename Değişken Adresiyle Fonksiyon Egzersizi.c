#include <stdio.h>
#include <stdlib.h>

void bolunebilirlik(int *n)
{
    if(*n%2==0)
    {
        printf("Sayimiz Cift Sayidir.\n");
    }
    if(*n%3==0)
    {
        printf("Sayi 3 ile tam bolunur.\n");
    }
    if(*n%2==0 && *n%3==0)
    {
        printf("Sayi 6 ile tam bolunur.\n");
    }
}

int main()
{
    int sayi;
    printf("Lutfen Bir Sayi Giriniz : ");
    scanf("%d",&sayi);
    bolunebilirlik(&sayi);
    return 0;
}
