#include<stdio.h>
void selection_sort(int arr[],int size);





int main()
{
    int arr[100],i,num;
    repeate: 
    printf("\n How many Elements You Want to Sorted in Ascending order : ");
    scanf("%d",&num);
    if(num>100 || num==0 || num<0)
    {
        printf("\n\tSorry!!....Please Enetr the Number (1 -> 100) \n");
        goto repeate;
    }
    printf("\n Please Enter the %d Elements----->\n",num);
    for(i=0;i<num;i++)
    {
        printf("\n%d.Enter the Number: ",i+1);
        scanf("%d",&arr[i]);
    }

    selection_sort(arr,num);
    return 0;
}





void selection_sort(int arr[],int size)
{
    int i,min,j,temp; 
    for(i=0;i<size-1;i++)
    {
        min = i;

    for(j=i+1;j<size;j++)
    {
        if( arr[j] < arr[min])
        min = j;
    }

    if(min != i)
    {
      temp =  arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
    }
    printf("\nSelection Sort method in Ascending Oder : ");
for(i=0;i<size-1;i++)
{
printf(" %d < ",arr[i]);
}
printf("%d",arr[i]);
printf("\n===========================================================================================================");
}