									// -: stack implementation in array :-
#include<stdio.h>
#define array_size 5
int stack[array_size]; 
int top=-1;  
void push( int item)
{
	if(top==array_size-1)
	{
		printf("\n [ **Array is Overflow & Exit** ] \n");	
	}
	else
	{
		stack[++top]=item; 
		printf("\n [%d] Item Inserted..\n",item);
	}	
}

void pop()
{
	if(top==-1)
	{
		printf("\n [ **Underflow & Exit** ]\n");
	}
	else {
	int item = stack[top--];
	printf("\n [%d] Item Deleted..\n",item);	
	}
}

void display()
{
	int i;
	if(top==-1)
	{
		printf("\n [ **The Stack is empty** ] \n");
	}
	else
	{
		printf("\n [Stack elements]:-->\t           [ Top = %d ] \n",top);
		printf("\n================================================\n");
	for(i=0; i<=top; i++)
	{
	printf("\n\tStore Array index[%d]:---> %d\n",i,stack[i]);	
	}
	printf("\n================================================\n");
	}

}
int Peek()
{
    if(top >= 0)
    {
        return stack[top];
    }
else
{
    return -1;
}

}

int main()
{
	int choice,item;
	printf("\n 1.push\n 2.pop\n 3.Display\n 4.Peek\n 5.Exit");
	 printf("\n================================================\n");
	while(1)
	{
		
		printf("\n Enter the choice: ");
		scanf("%d", &choice);
		 
		 switch(choice)
		 {
		 case 1:
		printf("\n Enter valu  to push : ");
		scanf("%d",&item);
		push(item);
		break;
		case 2: 
		pop();
		break;
		case 3:
		display();
		break;
		case 4:
        if(Peek()==-1)
        {
           printf("\n Exception from Peek! Empty Stack...!\n");
        }
        else{
            printf("\n Top Of Stack: %d \n",Peek());
        }
        break;
        case 5:
        return 0;
        break;
		default:
		printf("\n [ **Invaild choice** ]\n");
		
		}	 		
	}
	
return 0;

}