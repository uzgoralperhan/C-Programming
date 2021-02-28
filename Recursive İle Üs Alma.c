#include <stdio.h>
#include <stdlib.h>

int usAlma(int us,int taban)
{
    if(us==0)
    {
        return 1;
    }
    else
    {
        return taban*usAlma(us-1,taban);
    }
}

int main()
{

    int us,taban;
    printf("Lufen Ussu Alinacak Sayiyi Giriniz : ");
    scanf("%d",&taban);
    printf("Lutfen Ussu Giriniz : ");
    scanf("%d",&us);
    printf("%d ussu %d = %d dir.",taban,us,usAlma(us,taban));

    return 0;
}
