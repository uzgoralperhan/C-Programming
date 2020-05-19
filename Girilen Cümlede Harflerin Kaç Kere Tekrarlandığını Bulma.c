#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c;
    int sayma[26]= {0};
    int alperhan;
    int karakter;
    karakter=0;
    printf("Lutfen Bir Cumle Giriniz Ve Enter'a Basiniz!\n");
    while((c=getchar())!='\n')
    {
        alperhan=c-'a';
        if(alperhan >=0&& alperhan<26)
            sayma[alperhan]++;
        else
            karakter++;

    }

    printf("\nGirdiginiz Cumle %d Karakter Iceriyor : \n",karakter);
    for(int i=0; i<26; i++)
    {
        printf("%d Kez %c\n",sayma[i],'a'+i);
    }

    return 0;
}
