                             // searching Array elements and  Binary methods:-
#include<stdio.h>
int main()
{
	
	int a[10],i,item,lr=0,up=4,mid,f=0,j;
	
	printf("\n Please enter the 5 elements but ascending to descending order :\n");
	
	for(i=0;i<5;i++)
	{
		printf("\n Store Array index[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
 {
 	for(j=i+1;j<5;j++)
 	{
 		if(a[j]<a[i])
 		{
 		printf("\n====================================================================================================\n");	
		printf("\n[ sorry...Because the elements are  not arranged from ascending to descending order !! ]\n");
 		exit(0);
	}
 	else if(a[j]==a[i])
 		{
 		printf("\n====================================================================================================\n");
		printf("\n[ sorry...Because same element not allowed...Please enter different different elements ! ]\n");
 		exit(0);
 	}
	}
 }
    printf("\n================================================\n");
	printf("\n Enter Searching item: ");
	scanf("%d",&item);
	while(lr<=up)
	{
		mid=(lr+up)/2;
		
		if(a[mid]==item)
	{
		f=1; 
		break;
	}
	
	if(a[mid]<item)
	{
		lr=mid+1;
		
	}
	else
	{
		up=mid-1;
	}
			
	}
	
	if(f==1)
	{
		printf("\n================================================\n");	
		printf("\n Item found at : %d index\n",mid);
		
	}
	
	else
	{
		printf("\n================================================\n");	
		printf("\n [ **Item not found** ]");
		
	}

	return 0;
}