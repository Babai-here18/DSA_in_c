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
		printf("\n Stack elements:--> ");
		printf("\n================================================\n");
	for(i=0; i<=top; i++)
	{
	printf("\n\tStore Array index[%d]:---> %d\n",i,stack[i]);	
	}
	printf("\n================================================\n");
	}

}

int main()
{
	int choice,item;
	printf("\n 1.push\n 2.pop\n 3.Display\n 4.Exit");
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
		return 0;
		default:
		printf("\n [ **Invaild choice** ]\n");
		
		}	 		
	}
	return 0;
}
