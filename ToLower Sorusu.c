#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter;
    printf("Lutfen BUYUK HARF Ile Bir Karakter Giriniz : ");
    scanf("%c",&karakter);

    if(karakter>='A'&&karakter<='Z')
    {
        printf("\n\nKucuk Harf : %c\n\n",tolower(karakter));
    }
    else
    {
        printf("Hatali Bir Karakter Girdiniz!");
    }

    return 0;
}
