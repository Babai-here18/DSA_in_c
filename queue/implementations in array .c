	                                    // -: Queue implementation in array :-
#include<stdio.h>
#define size 5
int queue[size];
int front = -1, rear = -1;
int main()
{
    int choice,item;
    printf("\n================================================\n");
    printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
    printf("\n================================================\n");
    while(1)
    {
        printf("\nEnter Your Choice: ");
        scanf("%d",&choice);//1
        switch (choice) //1
        {
        case 1:
        if(rear == size-1) 
        {
            printf("\n [ **Array is Overflow & Exit** ] \n");
        }
        else{
            printf("\nEnter the Element: ");
            scanf("%d",&item);
            if(front == -1) 
            {
                front = rear = 0;
            }
            else{
                
                rear++;
            }
            queue[rear]=item;
            printf("\n [%d] Item Inserted..\n",item);
        }
        break;

        case 2:
        if ( front == -1)
        {
        printf("\n [ **Underflow & Exit** ]\n");
        }
        else{
            item = queue[front];
            if (front==rear)
            {
                front=rear=-1;
            }
            else{
                front++;
            }
            printf("\n [%d] Item Deleted..\n",item);
        }
        break;
        case 3:
        if (front == -1)
        {
            printf("\n [ **The Queue is empty** ] \n");
        }
        else{
            printf("\n Queue Elements :-->");
            printf("\n=============================================================\n");
            for (int i = front; i <= rear ; i++)
            {
            printf("\n\tStore Array index[%d]:---> %d\n",i,queue[i]);
            } 
            printf("\n=============================================================\n"); 
        }
        break;
        case 4:
        return 0; 
        break;
    default:
        printf("\n [ **Invaild choice** ]\n");
        break;
        }
    }
   
    return 0;
}