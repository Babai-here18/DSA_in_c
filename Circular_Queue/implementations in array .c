                                      // -: Circular Queue implementation in array :-
#include<stdio.h>
int isfull();
int isempty();
int dequeue();
void enqueue(int);
void display();

int cq[5]={0};
int rear=-1,front=-1;

int main() 
{
    int ch,user,a;
    do{
     repeat:
       printf("\n================================================\n");
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
    printf("\n================================================\n");
        printf("\n Enter Your Choice:- ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            if(isfull())
            printf("\n\t[ **Circular Queue is Overflow & Exit** ] \n");
            else
            {
                printf("\n Enter Element to Insert: ");
                scanf("%d",&user);
                enqueue(user);
            }
            break;
            case 2:
            if(isempty())
             printf("\n\t[ **Underflow & Exit** ]\n");
            else
            {
                a=dequeue();
                 printf("\n [%d] Item Deleted...):\n",a);
            }
            break;
            case 3:
            if(isempty())
            printf("\n\t[ **The Circular Queue is empty** ] \n");
            else
            display();
            break;
            case 4:
            printf("\n[ Thank you...): ]\n");
            return 0;
            break;
            default:
            printf("\n\t\t[ **Invaild choice** ]\n");
        goto repeat;
        }
    } 
    while(ch!=5);
}  



int isfull()
{
    if((front==0 && rear==4) || (rear+1 == front))
    return 1;
    else
    return 0; 
}



int isempty()
{
    if(front == -1)
    return 1;
    else
    return 0;

}



void enqueue(int x)
{
    if(front == -1)
    {
        rear=front=0;
    }
    else if(rear == 4)
    {
        rear=0;
    }
    else{
        rear=rear+1;
    }
    cq[rear]=x;
    printf("\n [%d] Item Inserted...):\n",x);
}



int dequeue()
{
    int x=0;
    x = cq[front];
    if(front==rear)
    {
       rear=front=-1;
    }
    else if(front == 4)
    {
        front=0;
    }
    else{
    front=front+1; 
    }
return x;
     
}



void display()
{
    int i=0;
     printf("\n-------------------------------------");
        printf("\n Fornt:- %d || Rear:- %d\n-------------------------------------",front,rear);
   printf("\n Circular Queue:-->\n-------------------------------------\n");
    if(rear>=front)
    {
        for(i=front;i<=rear;i++)
         printf("\n\tStore Array index[%d]:---> %d\n",i,cq[i]);

    }
    else{
        for(i=front;i<=4;i++)
        printf("\n\tStore Array index[%d]:---> %d\n",i,cq[i]);
        for(i=0;i<=rear;i++)
        printf("\n\tStore Array index[%d]:---> %d\n",i,cq[i]);
    }
}
