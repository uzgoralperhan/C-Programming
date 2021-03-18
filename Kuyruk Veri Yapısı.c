#include <stdio.h>
#include <stdlib.h>
#define BOYUT 5

int kuyruk[BOYUT],front=-1,rear=-1;

void enQueue(int veri)
{
    if(rear==BOYUT)
    {
        printf("Kuyruk dolu!");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear=rear+1;
        kuyruk[rear]=veri;
    }
}
void deQueue()
{
    if(front==-1 || front>rear)
    {
        printf("Kuyruk bos");
        front=-1;
        rear=-1;
    }
    else
    {
        front=front+1;
    }
}

void display()
{
    for(int i=front; i<=rear; i++)
    {
        printf("%d ",kuyruk[i]);
    }
}

int main()
{
    int secim;
    while(1)
    {
        printf("\n1-EnQueue");
        printf("\n2-DeQueue");
        printf("\n Yapmak istediginiz islemi seciniz : ");
        scanf("%d",&secim);
        switch(secim)
        {
        case 1:
            printf("Veri Giriniz : ");
            scanf("%d",&secim);
            enQueue(secim);
            display();
            break;
        case 2:
            deQueue(secim);
            display();
            break;
        }
    }
    return 0;
}
