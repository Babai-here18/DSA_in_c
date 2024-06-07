                                        // -: Circular --> Linked --> List :-

#include <stdio.h>
#include <stdlib.h>
struct node 
{
    int data;
    struct node *next; // Self Referential Structures------>
}; struct node *head, *current; // Global structure pointer variable------->

// All function declaration--------->
void create (); // function---> 1
void beginsert(); // function---> 2
void lastinsert(); // function---> 3
void random_insert_after();  // function---> 4
void random_insert_before(); // function---> 5
void begin_delete();  // function---> 6
void last_delete();  // function---> 7
void random_delete();  // function---> 8
void search();  // function---> 9
void all_nodes_dele();  // function---> 10
void sorted();  // function---> 11
void display(); // function---> 12

/* ---------------------------------------------------------------------------------------------------- */
                                // <--------- Start main() function --------->       
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
        printf("\n[ Thank you...): ]\n");
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

struct node *temp=NULL,*ptr=head;
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
    printf("\n %d.Enter the Number: ",i);
    scanf("%d",&arr[i]);
    temp=(struct node *)malloc(sizeof(struct node*));
    temp->data=arr[i];
    temp->next=head;
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

else if ((ptr == head) && (head->next == NULL))
{
    
    while(current->next != head)
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
    printf("\n %d.Enter the Number: ",i);
    scanf("%d",&arr[i]);
    temp=(struct node *)malloc(sizeof(struct node*));
    temp->data=arr[i];
    temp->next=head;
    current->next=temp;
    current=current->next;  
}
printf("\n\t[%d] Elements nodes Create is Successful...!",num); 
}


else{

current = head;
while(current->next != head)
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
    printf("\n %d.Enter the Number: ",i);
    scanf("%d",&arr[i]);
    temp=(struct node *)malloc(sizeof(struct node*));
    temp->data=arr[i];
    current->next=temp;
    temp->next=head;
    current=current->next; 
}

printf("\n\t[%d] Elements nodes Create is Successful...!",num);

}
}




// function---> 2

void beginsert(){
    int item;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node *));
   if (head == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }

    else
    {
       struct node *ptr=head;
        printf("\nEnter value: ");
        scanf("%d", &item);
        newnode->data = item;

        while(ptr->next != head)
        {
            ptr = ptr->next;
        }

        ptr->next=newnode;
        newnode->next = head;
        head = newnode;
        printf("\n\t[%d] Item is inserted\n",head->data); 
    }
 }





// function---> 3

void lastinsert()
{
    struct node *newnode, *ptr;
    int item;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (head == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }

    else
    {
        printf("\nEnter value: ");
        scanf("%d", &item);
        newnode->data = item;
        ptr = head;

         while (ptr->next != head)
         {
            ptr = ptr->next;
         }
         
         ptr->next=newnode;
         newnode->next=head;
        printf("\n\t[%d] Item is inserted\n",newnode->data);
    }
}




// function---> 4 

void random_insert_before()
{
    struct node *newnode,*ptr,*preptr,*temp=head;
    newnode=(struct node *)malloc(sizeof(struct node *));
    struct node *newnode_ex=(struct node *)malloc(sizeof(struct node *));
    int num,val,flag;
    int temp_ex;                 
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
    while(temp->next != head)
    {

    temp_ex = temp->data;
    temp=temp->next;
        
if(temp->data == val)
 {
    flag=1;
    break;
}

else if (temp_ex == val)
{
       
flag = 1;
break;

}
   
else{

flag=2;

}      
}


if(flag == 1)
{

    ptr = head;

    if(head->data == val)
    {
    while(ptr->next != head )
    {
        ptr=ptr->next;
    }
        newnode_ex->data = num;
        ptr->next = newnode_ex;
        newnode_ex->next = head;
        head = newnode_ex; 
     printf("\n\t[%d] Item is inserted\n",newnode_ex->data);
    }

 else{ 

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
    int num,val,flag;
    int temp_ex;
    struct node *newnode,*ptr=head,*preptr,*temp=head;
    newnode=(struct node*)malloc(sizeof(struct node *));
    struct node *newnode_ex=(struct node *)malloc(sizeof(struct node *));
   
    if (head == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }


else{

    printf("\n Enter the Valu: ");
    scanf("%d",&num);
    printf("\n Enter the value of The node which has to be Inserted: ");
    scanf("%d",&val);
     while(temp->next != head)
    {
        temp_ex = temp->data;
        temp=temp->next;
        if(temp->data == val)
        {
            flag=1;
            break;
        }

        else if(temp_ex == val)
        {
            flag = 1;
            break;
        }

        else{
            flag=2;
        }

    }

if(flag == 1)
{

    if(ptr->data == val)
    {
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
 struct node *temp=head;

 if (head == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }

 
 else
 {

    if(temp->next==head)
    {

        printf("\n\t[%d] Item deleted from the begining\n",head->data);
        free(head);
        head=NULL;
        return;
    }


    else{
    
        struct node *ptr=head;
        while(ptr->next != head)
        {
            ptr=ptr->next;
        }
    
    ptr->next = head->next;
    printf("\n\t[%d] Item deleted from the begining\n",head->data);
    free(head);
    head = ptr->next;
    return;
    }         
 }
}





// function---> 7

void last_delete()
{
    struct node *ptr=head, *preptr,*temp=head;
    if (head == NULL)
    {
      printf("\n\t[**List is empty**]\n");
    }
   

   else{

 if(temp->next==head)
    {

        printf("\n\t[%d] Item deleted from the Ending\n",head->data);
        free(head);
        head=NULL;
        return;
    }

else{
      
        while(ptr->next != head)
         {
            preptr=ptr;
            ptr=ptr->next;
         }
        
        printf("\n\t[%d] Item deleted from the Ending\n",ptr->data);
        preptr->next=ptr->next;
        free(ptr);
}
}
}




// function---> 8

void random_delete()
{

struct node *ptr=head,*preptr,*temp=head;
  int val;
  int flag;
 int temp_ex;
  
    
    if (head == NULL)
    {
      printf("\n\t[**List is empty**]\n");
    }


else{

struct node *newnode=head;
printf("\n Enter the value of The node which has to be deleted: ");
scanf("%d",&val);

if(temp->next==head)
{

    printf("\n\t[%d] Item deleted from the last Elements\n",head->data);
    free(head);
    head=NULL;
    return;
}

else{

    while(newnode->next != head)
{
    temp_ex = newnode->data;
    newnode = newnode->next;
    if(newnode->data == val)
    {
        flag = 1;
        break;
    }
    else if (temp_ex == val)
    {
        flag = 1;
        break;
    }
    else{

        flag = 2;
    }

}
if(flag==1)
{

  if(ptr->data==val)
  {
        while(ptr->next != head)
        {
            ptr=ptr->next;
        }
        ptr->next=head->next;
        printf("\n\t [%d] item deleted...!\n",head->data);
        free(head);
        head=ptr->next;
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
}  




// function---> 9

void search()
{
    struct node *ptr=head;
    int item, i= 1,flag,ex=0;
    if (ptr == NULL)
    {
       printf("\n\t[**List is empty**]\n");
    }
    else
    {
        printf("\nEnter searching item: ");
        scanf("%d", &item);
        while (ptr->next != head)
        {
            i++;
            ex=ptr->data;   
            ptr = ptr->next;
            if (ptr->data == item)
            {
                printf("\n\t[%d] Item found at location------>  %d \n",item,i);
                flag=0;
                break;
            }

            else if (ex == item) 
            {
                printf("\n\t[%d] Item found at location------> %d \n",item,i-1);
                flag=0;
                break;
            }
            
        else
        {
            
            flag=1;
        } 
        }

     if(flag==1) 
     {
          printf("\n\t!!Sorry...[%d] Item not found\n",item);
          return;
     }  
          

    }
}





// function---> 10

void  all_nodes_dele()
{

if(head == NULL)
{
    printf("\n\t[**List is empty**]\n");
}


else{

 while(head != NULL)
    {
    
struct node *ptr=head, *preptr,*temp=head;
    
 if(temp->next==head)
    {
        free(head);
        head=NULL;
     printf("\n\t [**All Node Deleted is Successful**] \n");
        return;
    }

else{
      
        while(ptr->next != head)
         {
            preptr=ptr;
            ptr=ptr->next;
         }
        preptr->next=ptr->next;
        free(ptr);
}
}
}   
}





// function---> 11 

void sorted()
{
int num;
struct node *ptr,*newnode;
newnode=(struct node *)malloc(sizeof(struct node *));
printf("\n Enter the any number: ");
scanf("%d",&num);
newnode->data = num;
if(head == NULL)
{
    head->data = num;
    head->next = head;
    return;
}

ptr = head;

 if(num  <  head->data)
{
   
  while(ptr->next != head)
{
    ptr = ptr->next;
}
newnode->next = head;
ptr->next = newnode;
head = newnode;
printf("\n\t[%d] Item is inserted\n",newnode->data);
}

else{

while((ptr->next != head && ptr->next->data < num))
{
    ptr = ptr->next;
}
newnode->next = ptr->next;
ptr->next = newnode;
printf("\n\t[%d] Item is inserted\n",newnode->data);
}
}






// function---> 12

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("\n\t[**List is empty**]\n");
    }

 else{

     printf("\nLinked List Elements Right Now :-\n\n");
      while(ptr->next != head)
    {

        printf("%d -> ",ptr->data);

        ptr = ptr->next;
    
    }
    printf("%d\n",ptr->data);
    return;
    }
}

                                       
                                  //  <--------- program End....(" Thank You ") --------->