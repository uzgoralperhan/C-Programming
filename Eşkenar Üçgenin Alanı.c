#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float alan(int a,int b,int c)
{
    float alan;
    float u;
    u=(a+b+c)/2.0;
    alan=sqrt(u*(u-a)*(u-b)*(u-c));
    return alan;

}

int main()
{
    int a,b,c;
    printf("Lutfen Uc Kenar Uzunlugunu Giriniz : ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("Eskenar Ucgenin Alani : %.2f 'dir.",alan(a,b,c));

    return 0;
}
