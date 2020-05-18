#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float sayi;

    do
    {
        printf("Lutfen Bir Pozitif Bir Sayi Giriniz : ");
        scanf("%f",&sayi);
        if(sayi<0)
        {
            printf("Lutfen Gecerli Pozitif Bir Sayi Giriniz : ");
            scanf("%f",&sayi);
        }
        if(sayi<0)
            continue;

        printf("Karekoku : %.2f \n\n",sqrt(sayi));
    }

    while(sayi);

    return 0;
}
