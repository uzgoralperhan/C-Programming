#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    int kucukHarf[26]= {0};
    int i=0;
    int enCok;
    char cumle[100];
    printf("Lutfen Bir Cumle Giriniz : ");
    gets(cumle);

    while(cumle[i])
    {

        if(cumle[i]>='a' && cumle[i]<='z')
        {
            kucukHarf[cumle[i]-'a']++;
        }
        i++;

    }

    enCok=kucukHarf[0];
    for(int j=1; j<26; j++)
    {
        if(kucukHarf[j]!=0)
        {
            if(kucukHarf[j]>enCok)
            {
                enCok=kucukHarf[j];
                harf=j+'a';

            }
        }

    }

    printf("En Cok Kullanilan Harf : %c dir.",harf);

    return 0;
}
