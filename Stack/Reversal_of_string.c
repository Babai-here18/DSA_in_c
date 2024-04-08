#include<stdio.h>
int main()
{
	int top=0,i=0,j=0;
	
	char string[100],stack[100],rev[100];
	
	printf("\n Enter the any string: ");
	gets(string);
	
	while(string[i] != '\0')
	{
		top++;
		stack[top] = string[i];
		i++;
	}
	
	while(top != 0)
	{
		rev[j] = stack[top];
		top--;
		j++;
	}
	
	printf("\n Reversal of string is : %s",rev);
	
	return 0;
}