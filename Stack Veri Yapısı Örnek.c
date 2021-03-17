#include <stdio.h>
#define BOYUT 5
int dizi[BOYUT],top;

void push(int veri)
{
    if(top+1==BOYUT)
    {
        printf("Stack Dolu");
    }
    else
    {
        top++;
        dizi[top]=veri;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack Bos");
    }
    else
    {
        top--;
    }
}

int peek()
{
    return dizi[top];
}

void yazdir()
{
    for(int i=0; i<top+1; i++)
    {
        printf("%d \t",dizi[i]);
    }
    printf("--->TOP");
}

int main()
{
    top=-1;
    int secim;
    int sayi;
    while(1)
    {
        printf("\n 1-Push");
        printf("\n 2-Pop");
        printf("\n 3-Peek");
        printf("\nLutfen Bir Secim Yapiniz : ");
        scanf("%d",&secim);
        switch(secim)
        {
        case 1:
            printf("Bir Sayi Giriniz : ");
            scanf("%d",&sayi);
            push(sayi);
            yazdir();
            break;

        case 2:
            pop();
            yazdir();
            break;
        case 3:
            printf("\nTop Degeri --> %d ",peek());
            break;
        }

    }
    return 0;
}
