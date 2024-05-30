                                    // -: Priority Queue implementation in array :-
#include<stdio.h> 
#include<stdlib.h>                      

// Ascending_Order Function Declaration----->
void Ascending_Order();
int isempty();
int isfull();
void insert(int,int);
int get_higest_priorityQueue();
int delete_higest_priorityQueue();
void display();
// Descending_Order Function Declaration----->
void  Descending_Order();
int descending_hp();
 int descending_dhp();
 //Global Structure------->
struct priorityQueue
{
    int ele;
    int priority;

}pq[5];
// priority Queue Rear declared------>
int rear = -1;
/* ---------------------------------------------------------------------------------------------------- */
                                    // Start main() function :----->

int main()
{
int choice;
repeate :
printf("\n================================================\n");
printf("\n 1). Ascending Order Priority Queue----->\n");

printf("\n 2). Descending order Priority Queue----->\n");
printf("\n================================================\n");
 printf("\n Please Enter the choice any one : " );
 scanf("%d",&choice);

 if(choice==1)
 {
    Ascending_Order();
 }
 else if(choice!=1 && choice!= 2)
 {
    printf("\n\t [ ** sorry wrong choice...! ** ] \n");
    goto repeate;
 }
 else
 {
 Descending_Order();
 }

return 0;

}


// Ascending_Order start---->

void Ascending_Order()
{
int ch,ele,priority,hp,dhp;
printf("\n\n\t<--- Ascending Order ---> ");
while (1)
{
   printf("\n================================================\n");
    printf("1.Insert\n2.get_higest_priorityQueue\n3.delete_higest_priorityQueue\n4.Display\n5.Exit");
    printf("\n================================================\n");
        printf("\n Enter Your Choice:- ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
            if(isfull())
            {
                printf("\n\t[ ** Priority Queue is Overflow & Exit** ] \n");
            }
            else{
                printf("\n Enter the Element: ");
                scanf("%d",&ele);
                printf("\n Enter the Element-Priority: ");
                scanf("%d",&priority);
                insert(ele,priority);
            }
            break;
            case 2:

            if(isempty())
            {
           printf("\n\t[ **The Priority Queue is empty** ] \n");
            }
            else{
                hp=get_higest_priorityQueue();
                printf("\n Higest priority is : %d",hp);

            }
      
            break;
            case 3:
              if(isempty())
            {
           printf("\n\t[ **Underflow & Exit** ]\n");
            }
            else{
                hp=get_higest_priorityQueue();
                dhp=delete_higest_priorityQueue();
                printf("\n [ Element: %d || Pirority: %d ] is Deleted...!",dhp,hp);
            }
            break;
            case 4:
            if(isempty())
            {
            printf("\n\t[ **The Priority Queue is empty** ] \n");
            }
            else{

                display();
            }
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

// Ascending_Order----> ( higest priority(hp) and delete higest priority(dhp) and isempty and isfull and display function defition ) :

int isempty()
{
    if(rear == -1)
    return -1;
    else
    return 0;
}


int isfull()
{
    if(rear == 4)
    return  1;
    else
    return 0;
}

void insert(int ele,int p)
{
    rear = rear + 1;
    pq[rear].ele=ele;
    pq[rear].priority=p;

}


int get_higest_priorityQueue()
{
    int i,hp=-1;
    if(!isempty())
    {
        for(i=0;i<=rear;i++)
        {
            if(pq[i].priority>hp)
            hp=pq[i].priority;
        }
    }
    return hp;
}


int delete_higest_priorityQueue()
{
    int i,j,hp,ele;
    hp=get_higest_priorityQueue();
    for(i=0;i<=rear;i++){
        if(pq[i].priority==hp)
        {
            ele = pq[i].ele;
            break;
        }
    }
    if(i<rear){
        for(j=i;j<rear;j++)
        {
            pq[j].ele=pq[j+1].ele;
            pq[j].priority=pq[j+1].priority;
        }
    }
    rear=rear-1;
    return ele;
}


void display()
{
    int i;
    printf("\n-------------------------------------");
    printf("\n Rear:- %d\n-------------------------------------",rear);
    printf("\n Priority Queue :-->\n-------------------------------------\n");
      for(i=0;i<=rear;i++)
      {
        printf("\n\t Element Store Array index[%d]:---> %d || [Priority]:---> %d\n",i,pq[i].ele,pq[i].priority);

      }

}


// Descending_Order start---->

void  Descending_Order()
{

int ch,ele,priority,hp,dhp;
printf("\n\n\t<--- Descending Order ---> ");
while (1)
{
   printf("\n================================================\n");
    printf("1.Insert\n2.get_higest_priorityQueue\n3.delete_higest_priorityQueue\n4.Display\n5.Exit");
    printf("\n================================================\n");
        printf("\n Enter Your Choice:- ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
            if(isfull())
            {
                printf("\n\t[ ** Priority Queue is Overflow & Exit** ] \n");
            }
            else{
                printf("\n Enter the Element: ");
                scanf("%d",&ele);
                printf("\n Enter the Element-Priority: ");
                scanf("%d",&priority);
                insert(ele,priority);
            }
            break;
            case 2:
            if(isempty())
            {
           printf("\n\t[ **The Priority Queue is empty** ] \n");
            }
            else{
                hp=descending_hp();
                printf("\n Higest priority is : %d",hp);
            }
            break;

            case 3:
              if(isempty())
            {
           printf("\n\t[ **Underflow & Exit** ]\n");
            }
            else{
                hp=descending_hp();
                dhp=descending_dhp();
               printf("\n [ Element: %d || Pirority: %d ] is Deleted...!",dhp,hp);
            }
            break;
            case 4:
            if(isempty())
            {
            printf("\n\t[ **The Priority Queue is empty** ] \n");
            }
            else{

                display();
            }
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

// Descending_Order-------> ( higest priority(hp) and delete higest priority(dhp) function defition ) : 
 

 int descending_hp()
 {
    int i,hp=pq[0].priority;
    if(!isempty())
    {
        for(i=0;i<=rear;i++)
        {
            if(pq[i].priority<hp)
            hp=pq[i].priority;
        }
    }
    return hp;
 } 


 
int descending_dhp()
{
    int i,j,hp,ele;
    hp=descending_hp();
    for(i=0;i<=rear;i++){
        if(pq[i].priority==hp)
        {
            ele = pq[i].ele;
            break;
        }
    }
    if(i<rear){
        for(j=i;j<rear;j++)
        {
            pq[j].ele=pq[j+1].ele;
            pq[j].priority=pq[j+1].priority;
        }
    }
    rear=rear-1;
    return ele;
}

                                    // program End....(" Thank You ")--------->

