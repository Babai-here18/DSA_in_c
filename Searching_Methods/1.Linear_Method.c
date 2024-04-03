                          // -: searching Array elements and  Linear methods :- 
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int num,a[60],i,iteam,j;
 
 printf("\n How many array elements of repeat: ");
 scanf("%d",&num);
 if(num>50 || num==0)
 {
 	printf("\n Sorry Number is not vaild...please enter the (1-50)");
 	exit(0);
 }
 else if(num<=0 && num != 0)
{
printf("\n Sorry Number is Negative...please enter the (1-50)");
exit(0);
}
 
 	
 printf("\n Please enter the %d elements :\n",num);
 for(i=0;i<num;i++)
 {
 	
	 printf("\n Store Array index[%d]: ",i);
	 scanf("%d",&a[i]);
 }
 printf("\n================================================\n");
 
 for(i=0;i<num;i++)
 {
 	for(j=i+1;j<num;j++)
 	{
 		if(a[j]==a[i])
 		{
		printf("[ sorry...Because same element not allowed...Please enter different different elements ! ]\n");
 		exit(0);
 	}
	 }
 }
 
 printf("\n Entered elements is:\n\n");
 for(i=0;i<num;i++)
 {
 	printf("   %d\n\n",a[i]);
 }
printf("================================================\n");

 printf("\n Enter the Searching elements: ");
 scanf("%d",&iteam);
 
 for(i=0;i<num;i++)
 {
 	if(a[i]==iteam)
 	{
 		printf("\n================================================\n");	
		printf("\n [Iteam found at:  %d]",i);
 		exit(0);
	}
}
printf("\n================================================\n");	
	if(a[i]!=num)
	{
		printf("\n [ *Iteam not found* ]");
		exit(0);
	}
 return 0;
 	 
 }