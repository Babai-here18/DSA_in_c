                                 // -: Singly --> Linked --> List :-

#include <stdio.h>
#include <stdlib.h>

// Global Structure----->
struct node
{
    int data;
    struct node *next; // Self Referential Structures------>
}; struct node *head, *current; // Global structure pointer variable------->

// All function declaration--------->
void create (); // function---> 1
void beginsert(); // function---> 2
void lastinsert(); // function---> 3
void random_insert_before(); // function---> 4
void random_insert_after(); // function---> 5
void begin_delete(); // function---> 6
void last_delete(); // function---> 7
void random_delete(); // function---> 8
void search(); // function---> 9
void all_node_del(); // function---> 10 
void display(); // function---> 11

/* ---------------------------------------------------------------------------------------------------- */
                                 // <--------- Start main() function --------->                                  
int main()
{
    int choice = 0;
    while (1)
    {
        printf("\n========================================================================");
        printf("\n\t <-------Choose One Option from the following List-------> \n");
        printf("\n0.create\nl.Insert in begining\n2.Insert at last\n3.Insert a node before a given node\n4.Insert a node after a given node\n5.Delete from Beginning\n6.Delete from last\n7.Delete item from any Elements\n8.Search\n9.Display\n10.All Nodes Deleted\n11.Exit\n");
        printf("========================================================================\n");
        printf("\nEnter your choice: ");
        scanf("\n%d", &choice);

        switch (choice)
        {
        case 0:
       create();
        break;
        case 1:
        beginsert();
            break;
        case 2:
        lastinsert();
            break;
        case 3:
        random_insert_before();
            break;
        case 4:
        random_insert_after();
            break;
        case 5:
        begin_delete();
            break;
        case 6:
        last_delete();
            break;
        case 7:
        random_delete();
            break;
        case 8:
        search();
        break;
        case 9:
        display();
        break;
        case 10:
        all_node_del();
        printf("\n\t [**All Node Deleted is Successful**] \n");
        break;
        case 11:
        printf("\n[ Thank you...): ]\n");
        exit(0);
        break;
        default:
            printf("\n\t\t[ **Invaild choice** ]\n");
        }
    }

    return 0;
}

                         // <--------- All function definition --------->






// function---> 1

void create ()
{
struct node *temp=NULL;
int num,arr[250],i;

if(head==NULL)
{
  printf("\nHow many elements nodes you want to create: ");
scanf("%d",&num);
if((num >200 || num==0) || (num<=0 && num!=0))
{
    printf("\n\tSorry This Value is insufficient....please Enter the ( 1 -> 200).\n");
    return;
}
printf("\n Enter the %d Elements---->\n",num);
for(i=1;i<=num;i++)
{
    printf("\n %d.Enter the Number: ",i);
    scanf("%d",&arr[i]);
    temp=(struct node *)malloc(sizeof(struct node*));
    temp->data=arr[i];
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        current=temp;
    }
    else{
        current->next=temp;
        current=current->next;
    }
} 
printf("\n\t[%d] Elements nodes Create is Successful...!",num); 
}



else{
current = head;
while(current->next != NULL)
{
    current = current->next;
}
  printf("\nHow many elements nodes you want to create: ");
scanf("%d",&num);
if((num >200 || num==0) || (num<=0 && num!=0))
{
    printf("\n\tSorry This Value is insufficient....please Enter the ( 1 -> 200).\n");
    return;
}
printf("\n Enter the %d Elements---->\n",num);
for(i=1;i<=num;i++)
{
    printf("\n %d.Enter the Number: ",i);
    scanf("%d",&arr[i]);
    temp=(struct node *)malloc(sizeof(struct node*));
    temp->data=arr[i];
    temp->next=NULL;
    current->next=temp;
    current=current->next;  
}
printf("\n\t[%d] Elements nodes Create is Successful...!",num); 
}
}





// function---> 2

void beginsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
   if (head == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }

    else
    {
        printf("\nEnter value: ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n\t[%d] Item is inserted\n",head->data);
    }
}






// function---> 3

void lastinsert()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }

    else
    {
        printf("\nEnter value: ");
        scanf("%d", &item);
        ptr->data = item;
        if (head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("\n\t[%d] Item is inserted\n",head->data);
        }
        else
        {
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("\n\t[%d] Item is inserted\n",ptr->data);
        }
    }
}





// function---> 4

void random_insert_before()
{
    struct node *newnode,*ptr,*preptr,*temp=head,*newnode_ex;
    newnode=(struct node *)malloc(sizeof(struct node *));
    int num,val,flag,ex;
      if (head == NULL)
    {
       printf("\n\t[**List is empty**]\n");
    }

    else
    {
    printf("\n Enter the Valu: ");
    scanf("%d",&num);
    printf("\n Enter the value of The node which has to be Inserted: ");
    scanf("%d",&val);
    while(temp != NULL)
    {
        ex = temp->data;
        if(temp->data == val)
        {
            flag=1;
            break;
        }
        else if (ex == val)
        {
            flag = 1;
            break;;
        }
        
        else{
            flag=2;
        }
        temp=temp->next;
    }


if(flag == 1)
{
    
    if(head->data == val)
    {

        newnode_ex=(struct node *)malloc(sizeof(struct node *));
        newnode_ex->data = num;
        newnode_ex->next = head;
        head = newnode_ex;
        printf("\n\t[%d] Item is inserted\n",newnode_ex->data);
    }

 else{

    ptr = head;
    while(ptr->data != val )
    {
     
        preptr=ptr;
        ptr=ptr->next;
    }
    newnode->data=num;
    newnode->next=ptr;
    preptr->next=newnode;
    printf("\n\t[%d] Item is inserted\n",newnode->data);

}
}

else{

    printf("\n\t[**Iteam not Found**]\n");

}
}
}





// function---> 5

void random_insert_after()
{
    int num,val,flag,ex;
    struct node *newnode,*newnode_ex,*ptr=head,*preptr,*temp=head;
    newnode=(struct node*)malloc(sizeof(struct node *));

    if (head == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }


else{

    printf("\n Enter the Valu: ");
    scanf("%d",&num);
    printf("\n Enter the value of The node which has to be Inserted: ");
    scanf("%d",&val);
     while(temp != NULL)
    {
        ex=temp->data;
        if(temp->data == val)
        {
            flag=1;
            break;
        }
        else if (ex == val)
        {
            flag = 1;
            break;
        }
        
        else{
            flag=2;
        }

        temp=temp->next;
    }

if(flag == 1)
{

    if(ptr->data == val)
    {
     newnode_ex = (struct node*)malloc(sizeof(struct node *));
     newnode_ex->data = num;
     newnode_ex->next = ptr->next;
     ptr->next = newnode_ex;
     printf("\n\t[%d] Item is inserted\n",newnode_ex->data);
    }

    else{

    while(preptr->data != val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    newnode->data=num;
    newnode->next=ptr;
    preptr->next=newnode;
    printf("\n\t[%d] Item is inserted\n",newnode->data);
    }
    }

else{
printf("\n\t[**Iteam not Found**]\n");

}
}
}





// function---> 6

void begin_delete()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        printf("\n\t[%d] Item deleted from the begining\n",ptr->data);
        free(ptr);
    }
}





// function---> 7

void last_delete()
{
    struct node *ptr=head, *preptr;
    if (head == NULL)
    {
      printf("\n\t[**List is empty**]\n");
    }
    else if (head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\n\t<-----Only node of the list deleted---->\n");
    }
    else
    {

        while (ptr->next != NULL)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = NULL;
        printf("\n\t[%d] Item deleted from the endining\n",ptr->data);
        free(ptr);
    }
}





// function---> 8

void random_delete()
{
  struct node *ptr,*preptr;
  int val;
  int flag;
    
    if (head == NULL)
    {
      printf("\n\t[**List is empty**]\n");
    }

else{

struct node *newnode=head;
  printf("\n Enter the value of The node which has to be deleted: ");
  scanf("%d",&val);
  while(newnode != NULL)
  {
    if(newnode->data == val)
    {
        flag=1;
        break;

    }

    else{

        flag=2;
    }

    newnode=newnode->next;
  }

if(flag==1)
{

   ptr=head;

  if(ptr->data==val)
  {
        struct node *temp;
        temp=head;
        head=temp->next;
        printf("\n\t [%d] item deleted...!\n",temp->data);
        free(temp);
        return;
  }
  else{
    while(ptr->data != val)
    {
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=ptr->next;
    printf("\n\t [%d] item deleted...!\n",ptr->data);
    free(ptr);
  }
}

else
{

  printf("\n\t[**Iteam not Found**]\n");

}
}
}





// function---> 9

void search()
{
    struct node *ptr;
    int item, i = 0,flag;
    ptr = head;
    if (ptr == NULL)
    {
       printf("\n\t[**List is empty**]\n");
    }
    else
    {
        printf("\nEnter searching item: ");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            i++;
            if (ptr->data == item)
            {
                printf("\n\t[%d] Item found at location [%d]\n",item,i);
                flag=0;
                break;
            }
        else
        {
            
            flag=1;
        }

            ptr = ptr->next;
           
        }

     if(flag==1) 
     {
          printf("\n\t!!Sorry...[%d] Item not found\n",item);
     }  
          

    }
}





// function---> 10

void all_node_del() 
{

struct node *ptr;
if(head == NULL)
{
    printf("\n\t[**List is empty**]\n");
}


else{

 while(head != NULL)
{
   
        ptr = head;
        head = head->next;
        free(ptr);
}
}   
}





// function---> 11

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }
    else
    {
        printf("\nLinked List Elements Right Now :-\n\n");
        while (ptr != NULL)
        {
            printf("%d --> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}

                             //  <--------- program End....(" Thank You ") --------->