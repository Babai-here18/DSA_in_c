                                        // -: Double Ended Queue (De_Quque) implementation in array :-
#include<stdio.h>
#include<stdlib.h>
//Types of De_Queue Function Declaration----------->
void dequeue(); // 1
void input_resteictedQueue(); // 2
void output_resteictedQueue(); // 3
// All Operation Function Declaration in De_Quque-----------> 
int isfull();
int isempty();
void push_rear(int);
void push_front(int);
int pop_rear();
int pop_front();
void display();
//Global Array----------->
int dq[5]={0};
// De_Queue Rear and Front declared------>
int rear=-1,front=-1;
/* ---------------------------------------------------------------------------------------------------- */
                                    // Start main() function :----->
int main()
{
    int choice;
    repeate:
    printf("\n================================================\n");
    printf("\n1.Double Ended Queue (Deque)------------>\n");
    printf("\n2.Input Restricted Queue------------>\n");
    printf("\n3.Output Restricted Queue------------>\n");
    printf("\n================================================\n");
    printf("\n Enter the choice any one: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
        dequeue();
        break;
        case 2:
        input_resteictedQueue();
        break;
        case 3:
        output_resteictedQueue();
        break;
        default:
        printf("\n\t [ ** sorry wrong choice...! ** ] \n");
        goto repeate;
    }

return 0;
}
 

//Double Ended Queue (De_Quque)() start---->

void dequeue() // Definition 1 
 {
    int  ch,ele;
    printf("\n\n<--- [ Double Ended Queue (Deque) ] ---> ");
    while(1)
    {
        printf("\n================================================\n");
        printf("1.Pus Rear\n2.Pop_Rear\n3.Push_Front\n4.Pop_Front\n5.Display\n6.Exit");
        printf("\n================================================\n");
        printf("\n Enter Your Choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            if(isfull())
            printf("\n\t[ **De-que is Overflow & Exit** ] \n");
            else
            {
                printf("\n Enter Element to Insert: ");
                scanf("%d",&ele);
                push_rear(ele);
            }
            break;

            case 2: 
            if(isempty())
            printf("\n\t[ **Underflow & Exit** ]\n");
            else
            {
                ele=pop_rear();
                printf("\n [%d] Element is Deleted...):\n",ele);
            }
            break;

            case 3:
            if(isfull())
            printf("\n\t[ **De-que is Overflow & Exit** ] \n");
            else
            {
                printf("\n Enter Element to Insert: ");
                scanf("%d",&ele);
                push_front(ele);
            }
            break;
            case 4:
             if(isempty())
            printf("\n\t[ **Underflow & Exit** ]\n");
            else
            {
                ele=pop_front();
                printf("\n [%d] Element is Deleted...):\n",ele);
            }
            break;
            case 5:
            if(isempty())
            printf("\n\t[ **The De-que is empty** ] \n");
            else
            display();
            break;
            case 6:
            printf("\n[ Thank you...): ]\n");
            exit(0);
            break;
        default:
         printf("\n\t\t[ **Invaild choice** ]\n");
        }

    }
    
 }


//Input Restricted Queue() Start--------->

 void input_resteictedQueue() // Definition 2
 {
    int  ch,ele;
    printf("\n\n<--- [ Input Restricted Queue ] ---> ");
    while(1)
    {
        printf("\n================================================\n");
        printf("1.Push_Rear\n2.Pop_Rear\n3.Pop_Front\n4.Display\n5.Exit");
        printf("\n================================================\n");
        printf("\n Enter Your Choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            if(isfull())
            printf("\n\t[ **De-que is Overflow & Exit** ] \n");
            else
            {
                printf("\n Enter Element to Insert: ");
                scanf("%d",&ele);
                push_rear(ele);
            }
            break;

            case 2: 
            if(isempty())
            printf("\n\t[ **Underflow & Exit** ]\n");
            else
            {
                ele=pop_rear();
                printf("\n [%d] Element is Deleted...):\n",ele);
            }
            break;

            case 3:
             if(isempty())
            printf("\n\t[ **Underflow & Exit** ]\n");
            else
            {
                ele=pop_front();
                printf("\n [%d] Element is Deleted...):\n",ele);
            }
            break;
            case 4:
            if(isempty())
            printf("\n\t[ **The De-que is empty** ] \n");
            else
            display();
            break;
            case 5:
            printf("\n[ Thank you...): ]\n");
            exit(0);
            break;
        default:
         printf("\n\t\t[ **Invaild choice** ]\n");
        }

    }
 }


// Output Restricted Queue() Start--------->

void output_resteictedQueue() // Definition 3 
{

int  ch,ele;
printf("\n\n<--- [ Output Restricted Queue ] ---> ");
    while(1)
    {
        printf("\n================================================\n");
        printf("1.Pus_Front\n2.Pop_Front\n3.Push_Rear\n4.Displayt\n5.Exit");
        printf("\n================================================\n");
        printf("\n Enter Your Choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
            if(isfull())
            printf("\n\t[ **De-que is Overflow & Exit** ] \n");
            else
            {
                printf("\n Enter Element to Insert: ");
                scanf("%d",&ele);
                push_front(ele);
            }
            break;
            case 2: 
            if(isempty())
            printf("\n\t[ **Underflow & Exit** ]\n");
            else
            {
                ele=pop_front();
                printf("\n [%d] Element is Deleted...):\n",ele);
            }
            break;
            case 3:
            if(isfull())
            printf("\n\t[ **De-que is Overflow & Exit** ] \n");
            else
            {
                printf("\n Enter Element to Insert: ");
                scanf("%d",&ele);
                push_rear(ele);
            }
            break;
            case 4:
            if(isempty())
            printf("\n\t[ **The De-que is empty** ] \n");
            else
            display();
            break;
            case 5:
            printf("\n[ Thank you...): ]\n");
            exit(0);
            break;
            default:
         printf("\n\t\t[ **Invaild choice** ]\n");
        }

    }

}

// All Operation Function Definition in De_Quque----------->

int isfull()
{
    if(((front==0)&&(rear==4)) || (front==rear+1))
    return 1;
    else
    return 0;

}
 

int isempty()
 {
    if(front==-1)
    return 1;
    else
    return 0;
 }


void push_rear(int ele)
{
    if(front==-1)
    {
        front=rear=0;
    }
    else if(rear==4)
    rear=0;
    else
    rear=rear+1;
    dq[rear]=ele;
    printf("\n [%d] Element is Inserted...):\n",ele);
}


int pop_rear()
{
    int ele;
    ele=dq[rear];
    dq[rear]=0;
    if(front==rear)
    {
        front=rear=-1;
    }
    else if(rear==0)
    rear=4;
    else
    rear=rear-1;
    return ele;
}


void push_front(int ele)
{
    if(front==-1)
    {
        front=rear=0;
    }
    else if(front==0)
    front=4;
    else
    front=front-1;
    dq[front]=ele;
      printf("\n [%d] Element is Inserted...):\n",ele);
}


int pop_front()
{
    int ele;
    ele=dq[front];
    dq[front]=0;
    if(front==rear)
    {
        front=rear=-1;
    }
    else if(front==4)
    front=0;
    else
    front=front+1;
    return ele;
}
 

void display()
 {
    int i=0;
    printf("\n-------------------------------------");
    printf("\n Fornt:- %d || Rear:- %d\n-------------------------------------",front,rear);
   printf("\n De-que:-->\n-------------------------------------\n");
    for(i=0;i<=4;i++)
    {
    printf("\n\tStore Array index[%d]:---> %d\n",i,dq[i]);
    }
 }

                                // program End....(" Thank You ")--------->