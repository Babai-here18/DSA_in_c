                                    // -: Doubly --> Linked --> List :-

#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next; // Self Referential Structures------>
    struct node *prev; // Self Referential Structures------>
}; struct node *head,*current; // Global structure pointer variable------->

// All function declaration--------->
void create (); // function---> 1
void beginsert(); // function---> 2
void lastinsert(); // function---> 3
void random_insert_before();  // function---> 4
void random_insert_after(); // function---> 5
void begin_delete();  // function---> 6
void last_delete();  // function---> 7
void random_delete();  // function---> 8
void search();  // function---> 9
void sorted();  // function---> 10
void all_nodes_dele();  // function---> 11
void display(); // function---> 12

/* ---------------------------------------------------------------------------------------------------- */
                                    // Start main() function :----->        
int main()
{
int choice;
    while (1)
    {
        printf("\n========================================================================");
        printf("\n\t <-------Choose One Option from the following List-------> \n");
        printf("\n0.create\nl.Insert in begining\n2.Insert at last\n3.Insert a node before a given node\n4.Insert a node after a given node\n5.Delete from Beginning\n6.Delete from last\n7.Delete item from any Elements\n8.Search \n9.Display\n10.Sorted Insert\n11.All nodes Deleted\n12.Exit\n");
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
       sorted();
        break;
        case 11:
        all_nodes_dele();
        break;
        case 12:
        printf("\n\t\t[ Thank you...): ]\n");
        printf("========================================================================\n");
        exit(0);
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

if((num >200 || num==0) || (num<=0 || num==1))
{
    if(num == 1 )
    {
        printf("\n Sorr!!..Cannot create one nodes...Please create Two nodes--->( 2 -> 200) \n");
        return;
    }
    else{

    printf("\n\tSorry This Value is insufficient....please Enter the ( 2 -> 200).\n");
    return;

    }
    
}

printf("\n Enter the %d Elements---->\n",num);
for(i=1;i<=num;i++)
{
    temp=(struct node *)malloc(sizeof(struct node));
    temp->prev=temp->next=NULL;
    printf("\n %d.Enter the Number: ",i);
    scanf("%d",&arr[i]);
    temp->data=arr[i];
    if(head==NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        current = (struct node *)malloc(sizeof(struct node));
        head = temp;
        current = temp;
    }
    else{

            current->next = temp;
            temp->prev = current;
            current = temp;
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
if((num >200 || num==0) || (num<=0 || num==1))
{
    if(num == 1 )
    {
        printf("\n Sorr!!..Cannot create one nodes...Please create Two nodes--->( 2 -> 200) \n");
        return;
    }
    else{

    printf("\n\tSorry This Value is insufficient....please Enter the ( 2 -> 200).\n");
        return;
    }  
}
printf("\n Enter the %d Elements---->\n",num);
for(i=1;i<=num;i++)
{
    temp=(struct node *)malloc(sizeof(struct node));
    temp->prev=temp->next=NULL;
    printf("\n %d.Enter the Number: ",i);
    scanf("%d",&arr[i]);
    temp->data=arr[i];
    current->next=temp;
    temp->prev = current;
    current = temp;
}

printf("\n\t[%d] Elements nodes Create is Successful...!",num);
}
}





// function---> 2

void beginsert()
{
    if (head == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }
else
{
int num;
struct node *newnode;
printf("\n Enter the Data: ");
scanf("%d",&num);
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data = num;
newnode->next = head;
head->prev = newnode;
newnode->prev = NULL;
head = newnode;
printf("\n\t[%d] Item is inserted\n",newnode->data);
}
} 





// function---> 3

void lastinsert()
{

if (head == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }

else
{

int num;
struct node *ptr,*newnode;
newnode=(struct node *)malloc(sizeof(struct node));
printf("\n Enter the Data: ");
scanf("%d",&num);
newnode->data = num;
ptr=head;

    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
     
     ptr->next = newnode;
     newnode->prev = ptr;
     newnode->next = NULL;
    printf("\n\t[%d] Item is inserted\n",newnode->data);
}
}





// function---> 4

void random_insert_before()
{
struct node *newnode,*ptr,*temp=head;
    newnode=(struct node *)malloc(sizeof(struct node ));
    int num,val,flag;             
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
    
if(temp->data == val)
 {
    flag=1;
    break;
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
        
        newnode->data = num;
        newnode->prev = NULL;
        newnode->next = head;
        head->prev = newnode;
        head = newnode;

     printf("\n\t[%d] Item is inserted\n",newnode->data);
    }

 else{ 

ptr = head;
    while(ptr->data != val )
    {
     
        ptr=ptr->next;
    }
 
    newnode->data=num;
    newnode->next=ptr;
    ptr->prev->next = newnode;
    newnode->prev = ptr->prev;
    ptr->prev = newnode;
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
    int num,val,flag;
    struct node *newnode,*ptr=head,*temp=head;

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
        if(temp->data == val)
        {
            flag=1;
            break;
        }
        
        else{
            flag=2;
        }

        temp=temp->next;
    }

if(flag == 1)
{
    newnode=(struct node*)malloc(sizeof(struct node));

    while(ptr->data != val)
    {
     ptr=ptr->next;
    }

     if((ptr->data == val)&&(ptr->next == NULL))
        {
            newnode->data = num;
            ptr->next = newnode;
            newnode->prev = ptr;
            newnode->next = NULL;
            printf("\n\t[%d] Item is inserted\n",newnode->data);
            return;
        }
        newnode->data = num;
        newnode->next = ptr->next;
        ptr->next->prev = newnode;
        ptr->next = newnode;
        newnode->prev = ptr;    
    printf("\n\t[%d] Item is inserted\n",newnode->data);

}

else{
printf("\n\t[**Iteam not Found**]\n");

}
}
}





// function---> 6

void begin_delete()
{

if(head == NULL)
{
    printf("\n\t[**List is empty**]\n");
}

else if (head->next == NULL)
{
    printf("\n\t[%d] Item deleted from the begining\n",head->data);
    free(head);
    head = NULL;
    return; 
}


else
{

struct node  *ptr = head;
head = head->next;
head->prev = NULL;
printf("\n\t[%d] Item deleted from the begining\n",ptr->data);
free(ptr);
return;
}
}





// function---> 7

void last_delete()
{

if(head == NULL)
{
    printf("\n\t[**List is empty**]\n");
}

else if (head->next == NULL)
{
    printf("\n\t[%d] Item deleted from the Eending\n",head->data);
    free(head);
    head = NULL;
    return; 
}

else
{
struct node *ptr = head;
while(ptr->next != NULL)
{
    ptr = ptr->next;
}
ptr->prev->next = NULL;
printf("\n\t[%d] Item deleted from the Eending\n",ptr->data);
free(ptr);
return;
}
}






// function---> 8

void random_delete()
{

if (head == NULL)
{
    printf("\n\t[**List is empty**]\n");
}

else{

int val;
int flag;
struct node *newnode=head,*temp,*ptr,*preptr;
printf("\n Enter the value of The node which has to be deleted: ");
scanf("%d",&val);

    while(newnode != NULL)
{
    if(newnode->data == val)
    {
        flag = 1;
        break;
    }
   
    else{

        flag = 2;
    }
    newnode = newnode->next;

}
if(flag==1)
{
    
  if(head->data==val && head->next != NULL)
  {
        temp = head;
        head = head->next;
        head->prev = NULL;
        printf("\n\t [%d] item deleted...!\n",temp->data);
        free(temp);
        return;
  }

else if (head->data == val && head->next == NULL)
{
    printf("\n\t [%d] item deleted...!\n",head->data);
    free(head);
    head = NULL;
    return; 
}


  else{

    ptr = head;
    while(ptr->data != val)
    {
        preptr = ptr;
        ptr=ptr->next;
    }

       preptr->next = ptr->next;
       ptr->prev = preptr;
    printf("\n\t [%d] item deleted...!\n",ptr->data);
    free(ptr);
    return;
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
    int item, i = 1, flag;
    ptr = head;
    if (ptr == NULL)
    {
       printf("\n\t[**List is empty**]\n");
    }
    else
    {
        printf("\nEnter item which you want to search : ");
        scanf("%d", &item);

        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("\n\t[%d] Item found at location------>  %d \n",item,i);
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
             printf("\n\t!!Sorry...[%d] Item not found\n",item);
        }
    }
}





// function---> 10
void sorted()
{

int num;
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
if(head == NULL)
{
   printf("\n\t[**List is empty**]\n");
}

else
{
printf("\n Enter the any number: ");
scanf("%d",&num);
newnode->data = num;
if(newnode->data < head->data)
{
newnode->next = head;
newnode->prev = NULL;
head->prev = newnode;
head = newnode;
printf("\n\t[%d] Item is inserted\n",newnode->data);
}
else
{
    struct node *ptr = head;
        while(newnode->data > ptr->data)
        {
            if(ptr->next == NULL)
            {
                ptr->next = newnode;
                newnode->prev = ptr;
                newnode->next = NULL;
            printf("\n\t[%d] Item is inserted\n",newnode->data);
            return;
            }
        ptr = ptr->next;
        }
        ptr->prev->next = newnode;
        newnode->prev = ptr->prev;
        newnode->next = ptr;
        ptr->prev = newnode;
        printf("\n\t[%d] Item is inserted\n",newnode->data);
}
}
}





// function---> 11

void all_nodes_dele()
{

    struct node *ptr;
    if(head == NULL)
    {
        printf("\n\t[**List is empty**]\n");

    }

    else
    {
    
    while(head != NULL)
    { 

    if(head->next == NULL)
    {
    free(head);
    head=NULL;
    printf("\n\t [**All Node Deleted is Successful**] \n");
    return;
    }

    else
    {
    ptr = head;
    head = head->next;
    free(ptr);
}
}
}
}





// function---> 12

void display()
{
    if(head == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }

else
{

 printf("\nLinked List Elements Right Now :-\n\n");
  struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d <--> ",ptr->data);
        ptr = ptr->next;
    }
     
    printf("NULL\n"); 

}
}

                             //  <--------- program End....(" Thank You ") --------->